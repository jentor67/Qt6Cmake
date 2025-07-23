#include<stdio.h>
#include<fstream>
#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>
#include<math.h>
#include<ctime>
#include "constants.hpp"
#include "orbitalParameters.hpp"
#include "startParameters.hpp"
#include "structures.hpp"
#include "vectors.hpp"

//*** Compi and run ***
//Program bh1000.cpp
//Purpose: Create 1000 random black holes around SagA
//observing the orbital effects
//compile:
//>./compile
//
//run:
//>./bh1000.o
//**********************

using namespace std;


int main(void)
{

    double mass[objects]; // mass array
    double i, omega, OMEGA, nue, a, mue, ra, rp, e, b, T;
    double x, y, z, u, v, w;
    int ct, timet;

    clock_t begin = clock();
 
    BlackHole bh[objects]; // Declaring the structure

    ct = 0;
    bh[ct].mass = mSagA;
    bh[ct].x = 0;
    bh[ct].y = 0;
    bh[ct].z = 0;
    bh[ct].u = 0;
    bh[ct].v = 0;
    bh[ct].w = 0;
    ct += 1;
    while( ct < objects ){
        bh[ct].mass = randomMass();
        i = randomInclination();
        omega = randomArgumentOfPeriapsis();
        OMEGA = randomLongitudeOfAscendingNode();
        nue = randomTrueAnomaly();
        e = randomEccentricity();
        a = randomSimiMajorAxis();
        b = a*pow((1-pow(e,2)),.5);
        radiusVelocity(bh[ct].mass, a, e, i, OMEGA, omega, 
            &rp, &ra, &mue, &T);

        startPointVelocity(a, e, nue, rp, omega, i, OMEGA, mue, b, 
            &x, &y, &z, &u, &v, &w);
        bh[ct].x = x;
        bh[ct].y = y;
        bh[ct].z = z;
        bh[ct].u = u;
        bh[ct].v = v;
        bh[ct].w = w;
        bh[ct].T = T;



        ct += 1;
    }

    ofstream out;
    out.open ("/home/jmajor/temp/test.txt");
    timet=0;
    while(timet < TIMELIMIT)
    {
        stepMotion(bh);
        
        out << "t = " << timet << " T = " << bh[1].T << " x= " << bh[1].x << " y= " << bh[1].y << " z= " << bh[1].z << '\n';
        
        timet += TIMESTEP;
    }
    clock_t end = clock();
    double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
    out << elapsed_secs << '\n';
    out.close();

}
