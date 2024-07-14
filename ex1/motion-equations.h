#include <stdio.h>
#include "formulas.h"

/*
*   describes the distance of  uniform linear motion.
*/
float computeDistUniLinearMotion( velocity givenVelocity, time timeStart, time timeEnd);
/*
*   describes the distance of an uniformly accelerated linear motion
*/
float computeDistUniLinearAccMotion(velocity velocityStart, velocity velocityEnd, acceleration givenAcceleration);
/*
*   describes the veolicity in an uniformly accelerated linear motion
*/
float computeVelocityUniAccMotion(acceleration givenAcceleration, time timeStart, time timeEnd, velocity velocityStart);