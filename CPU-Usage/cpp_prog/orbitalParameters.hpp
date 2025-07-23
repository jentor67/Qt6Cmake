#include "structures.hpp"

void accelerationVector(double, double, double, double, double*, 
    double*, double*);

double force(double, double, double);

void forceVectorResults(BlackHole, BlackHole, double*, double*, double*, int, int); 

void forceVector(double, double, double, double, double*, double*, 
    double*);

void positionVector(BlackHole, double*, double*, double*);

double radius(BlackHole, BlackHole);

void radiusVelocity(double, double, double, double, double, 
    double, double*, double*, double*, double*);

double schwarzchildRadius(double);

void startPointVelocity(double, double, double, double, double, double, 
    double, double, double, double*, double*, double*, double*, 
    double*, double*);

void stepMotion(BlackHole*);

void velocityVector(BlackHole, double, double, double, 
    double*, double*, double*);

