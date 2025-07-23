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

    double m, i, omega, OMEGA, nue, a, mue, ra, rp, e, b, T, r;
    double rbh, fbh, influence;
    double x, y, z, u, v, w;
    double tmax=0;
    int ct, timet;
    int iStart1, iStart2;
    double f;
    BlackHole bh[objects];

    clock_t begin = clock();
 
  
    ct = 0;

    iStart1 = 0;
    while( iStart1 < objects ){
        rbh = radius(bh[iStart1], bh[0]);
        fbh = force(bh[iStart1].mass, bh[0].mass, rbh );
        iStart2 = 0;
        while( iStart2 < objects ){
            if( iStart1 != iStart2 )
            {
                r = radius(bh[iStart1], bh[iStart2]);
                f = force(bh[iStart1].mass, bh[iStart2].mass, r );
                influence=f/fbh;
                cout << iStart1 << "," << iStart2 << "," 
                       << bh[iStart1].mass << "," << bh[iStart2].mass << "," 
                       << r << "," << f << "," << influence << '\n';
            }
            iStart2 += 1;
        }
        iStart1 += 1;
    }
    cout << tmax << '\n';
}
