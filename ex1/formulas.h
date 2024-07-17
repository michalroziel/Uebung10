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

/**
 *
 * @param deltaDistance
 * @param deltaTime
 * @return the resulting velocity
 */
velocity computeVelocity(distance deltaDistance, time deltaTime);

/**
 *
 * @param deltaVelocity
 * @param deltaTime
 * @return the rsulting acceleration
 */
acceleration computeAcceleration(velocity deltaVelocity, time deltaTime);

/**
 *
 * @param givenMass
 * @param givenVelocity
 * @return the resulting impuls
 */
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
