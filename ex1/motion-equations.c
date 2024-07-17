#include "motion-equations.h"
#include <stdio.h>

/**
 *
 * @param base
 * @param exponent
 * @return base to the power of exponent
 */
float powerFunction(const float base, const float exponent)
{
    if (exponent == 0)
    {
        return 1.0;
    }
    else
    {
        return powerFunction(base, exponent - 1.0) * base;
    }
}

/**
 *
 * @param givenVelocity the given distance of the motion
 * @param timeStart
 * @param timeEnd
 * @return describes the distance of  uniform linear motion.
 */
float computeDistUniLinearMotion(velocity givenVelocity, time timeStart,
                                 time timeEnd)
{
    time timeDifference = timeEnd - timeStart;
    distance resultingDistance = givenVelocity * timeDifference;

    return resultingDistance;
}

/**
 *
 * @param velocityStart
 * @param velocityEnd
 * @param givenAcceleration
 * @return describes the distance of an uniformly accelerated linear motion
 */
float computeDistUniLinearAccMotion(velocity velocityStart,
                                    velocity velocityEnd,
                                    acceleration givenAcceleration)
{

    velocity velocityEndSquared = powerFunction(velocityEnd, velocityEnd);
    velocity velocityStartSquared = powerFunction(velocityStart, velocityStart);

    float numerator = velocityEndSquared - velocityStartSquared;

    float denomiator = 2 * givenAcceleration;

    distance resultDistance = numerator / denomiator;

    return resultDistance;
}

/**
 *
 * @param givenAcceleration
 * @param timeStart
 * @param timeEnd
 * @param velocityStart
 * @return describes the veolicity in an uniformly accelerated linear motion
 */
float computeVelocityUniAccMotion(acceleration givenAcceleration,
                                  time timeStart, time timeEnd,
                                  velocity velocityStart)
{

    time timeDifference = timeEnd - timeStart;

    velocity resultingVelocity =
        (givenAcceleration * timeDifference) + velocityStart;

    return resultingVelocity;
}
