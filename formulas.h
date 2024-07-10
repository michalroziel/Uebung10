//
// Created by Michal Roziel on 10.07.24.
//

#ifndef FORMULAS_H
#define FORMULAS_H

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

float computeVelocity(velocity *v);
float computeAcceleration(acceleration *a);
float computeImpuls(impuls *i);



#endif //FORMULAS_H
