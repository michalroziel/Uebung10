#include <stdio.h>
#include "motion-equations.h"

float powerFunction(float x , float y){

    if ( y == 0 ){

        return 1.0;
    }
    else{

        return powerFunction(x,y-1.0) * x ;
    }
}

float computeDistUniLinearMotion( velocity givenVelocity, time timeStart, time timeEnd){
    time timeDifference = timeEnd-timeStart;
    distance resultingDistance = givenVelocity*timeDifference;

    return resultingDistance;
}

float computeDistUniLinearAccMotion(velocity velocityStart, velocity velocityEnd, acceleration givenAcceleration){

    velocity velocityEndSquared = powerFunction(velocityEnd,velocityEnd);
    velocity velocityStartSquared = powerFunction(velocityStart,velocityStart);
    
    float numerator = velocityEndSquared-velocityStartSquared;

    float denomiator = 2*givenAcceleration;

    distance resultDistance = numerator/denomiator;

    return resultDistance;
}

float computeVelocityUniAccMotion(acceleration givenAcceleration, time timeStart, time timeEnd, velocity velocityStart){

    time timeDifference = timeEnd-timeStart;

    velocity resultingVelocity = (givenAcceleration*timeDifference) + velocityStart;

    return resultingVelocity;

}



