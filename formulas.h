//
// Created by Michal Roziel on 10.07.24.
//

#ifndef FORMULAS_H
#define FORMULAS_H

typedef struct{
    float deltaDistance;
    float deltaTime;
    float resultVelocity;
 } velocity;

typedef struct{
    float deltaVelocity;
    float deltaTime;
    float resultAcceleration;
} acceleration;

typedef struct{
    float mass;
    float velocity;
    float resultImplus;
} impuls;

#endif //FORMULAS_H
