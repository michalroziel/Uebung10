//
// Created by Michal Roziel on 10.07.24.
//

#ifndef FORMULAS_H
#define FORMULAS_H

typedef float velocity;
typedef float distance;
typedef float time;

typedef float acceleration;

typedef float mass;
typedef float impuls;

velocity computeVelocity(distance deltaDistance, time deltaTime);

acceleration computeAcceleration(velocity deltaVelocity, time deltaTime);

impuls computeImpuls(mass givenMass, velocity givenVelocity);


/*
typedef struct{
    float deltaDistance;
    float deltaTime;
 
 } velocity;

typedef struct{
    float deltaVelocity;
    float deltaTime;
   
} acceleration;

typedef struct{
    float mass;
    float velocity;
   } impuls;

   */


#endif //FORMULAS_H
