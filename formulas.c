//
// Created by Michal Roziel on 10.07.24.
//
#include <stdio.h>
#include "formulas.h";

int main(void){



    return 0;

}
/*  
*   computes the velocity 
*/
    float computeVelocity(velocity *v){
        float distance = v->deltaDistance;
        float time = v->deltaTime;
        float velocity = distance / time ;

        return velocity;
    }
/*  
*   computes acceleration
*/
    float computeAcceleration(acceleration *a){
        float time = a->deltaTime;
        float velocity = a->deltaVelocity;
        float acceleration = velocity/time;

        return acceleration;
    }
/*  
*   computes the impuls  
*/
    float computeImpuls(impuls *i){
        float mass = i->mass;
        float velocity = i->velocity;
        float impuls = mass * velocity;

        return impuls;
    }