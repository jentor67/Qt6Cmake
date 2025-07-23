#include<iostream>
//#include<cstdlib>
//#include<math.h>
#include<cmath>
#include "vectors.hpp"
#include "constants.hpp"

using namespace std;

void rotate2D(double x, double y, double angle,double* x0, double* y0)
{
   //  angle will be in degrees
   *x0 = x*cos(angle/180*pi) - y*sin(angle/180*pi);
   *y0 = x*sin(angle/180*pi) + y*cos(angle/180*pi);
}

void tangentVectorEllipse(double x, double y, double a, double b, double v, 
     double* vx, double* vy)
{
    double E, F, D, slope;
    double vx1, vy1, vz1; 
    double vx0, vy0;

    E = pow(b/a,2);
    F = pow( pow(b,2) - E*pow(x,2), .5);

    if( (x > 0) && (y == 0) )
    {
        vx0 = 0;
        vy0 = 1;
    }
    else if( (x < 0) && (y == 0) )
    {
        cout << "Test2\n";
        vx0 = 0;
        vy0 = -1;
    }
    else if( (x == 0) && (y > 0))
    {
        vx0 = -1;
        vy0 = 0;
    }
    else if( (x == 0) && (y < 0))
    {
        vx0 = 1;
        vy0 = 0;
    }
    else
    {
        vx0 = -1.0;
        if( y < 0 ) vx0 = 1.0;
        vy0 = E*x/F;
    }

    unitVector(vx0, vy0, 0.0, &vx1, &vy1, &vz1);
     
    *vx = vx1*v;
    *vy = vy1*v;
}


void Vector(double x1, double y1, double z1, double x2, double y2, 
     double z2, double* x, double* y, double* z)
{

    *x = x2 - x1;
    *y = y2 - y1;
    *z = z2 - z1;
}


void unitVector(double vx, double vy, double vz, double* ux, double* uy, double* uz)
{
    double v;
    
    v = pow( pow(vx,2) + pow(vy,2) + pow(vz,2) , .5 );
    *ux = vx/v;
    *uy = vy/v;
    *uz = vz/v;
}



