#include<iostream>
#include<random>
#include "startParameters.hpp"
#include "constants.hpp"

using namespace std;

// determine the random mass betweein solor masses 5 and 15
double randomMass(double min, double max)
{
    float mass;
    float randomSolarMass;

    // Random seed
    random_device rd;
    // Initialize Mersenne Twister pseudo-random number generator
    mt19937 gen(rd());
    // Generate pseudo-random numbers
    //uniformly distributed in range (1, 100)
    uniform_int_distribution<> dis(min*100, max*100);

    //int randomX = dis(gen);
    randomSolarMass = float(dis(gen))/100;
    mass = SOLARMASS * randomSolarMass;

    return(mass);
}

// determine the inclination from 0 to 360 degrees
double randomInclination()
{
    float inclination; // radius in meters

    // Random seed
    random_device rd;
    // Initialize Mersenne Twister pseudo-random number generator
    mt19937 gen(rd());
    // Generate pseudo-random numbers
    uniform_int_distribution<> dis(1, 3600);

    //int randomX = dis(gen);
    inclination = float(dis(gen))/10;

    return(inclination);
}


// determine the Argument of Periapsis
double randomArgumentOfPeriapsis()
{
    float omega; // omega

    // Random seed
    random_device rd;
    // Initialize Mersenne Twister pseudo-random number generator
    mt19937 gen(rd());
    // Generate pseudo-random numbers
    uniform_int_distribution<> dis(0, 3600);

    //int randomX = dis(gen);
    omega = float(dis(gen))/10;

    return(omega);
}


// determine the Longitude of ascending node
double randomLongitudeOfAscendingNode()
{
    float OMEGA; // OMEGA

    // Random seed
    random_device rd;
    // Initialize Mersenne Twister pseudo-random number generator
    mt19937 gen(rd());
    // Generate pseudo-random numbers
    uniform_int_distribution<> dis(0, 3600);

    //int randomX = dis(gen);
    OMEGA = float(dis(gen))/10;

    return(OMEGA);
}


// determine the True anomaly
double randomTrueAnomaly()
{
    float nue; // nue

    // Random seed
    random_device rd;
    // Initialize Mersenne Twister pseudo-random number generator
    mt19937 gen(rd());
    // Generate pseudo-random numbers
    uniform_int_distribution<> dis(0, 3600);

    //int randomX = dis(gen);
    nue = float(dis(gen))/10;

    return(nue);
}

// determine the semi-major Axis
double randomSimiMajorAxis(double min, double max)
{
    float a; // nue

    // Random seed
    random_device rd;
    // Initialize Mersenne Twister pseudo-random number generator
    mt19937 gen(rd());
    // Generate pseudo-random numbers
    uniform_int_distribution<> dis(min*100, max*100);

    //int randomX = dis(gen);
    a = float(dis(gen))/100*LIGHTYEAR;

    return(a);
}


// determine the eccentricity
double randomEccentricity()
{
    float e; // nue

    // Random seed
    random_device rd;
    // Initialize Mersenne Twister pseudo-random number generator
    mt19937 gen(rd());
    // Generate pseudo-random numbers
    uniform_int_distribution<> dis(1, 999);

    //int randomX = dis(gen);
    e = float(dis(gen))/1000;

    return(e);
}















