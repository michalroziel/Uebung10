#include "formulas.c"
#include "formulas.h"
#include "motion-equations.c"
#include "motion-equations.h"
#include <stdio.h>

void showMechQuantMenu(void)
{

    int choiceIndex;
    /*
     * quantities needed for velocity
     */
    distance givenDistance;
    time givenTime;
    velocity resultVelocity;

    /*
     * quantities needed for acceleration
     */
    velocity givenVelocity;
    // givenTime already exists.
    acceleration resultingAcceleration;

    /*
     * quantities needed for impuls
     */
    mass givenMass;
    // givenVelocity already exists.
    impuls resultingImpuls;

    printf("Please choose one of the following mechanical quantities to compute: "
           "\n\n");
    printf("1. computation of mechanical velocity. \n\n");
    printf("2. computation of mechanical acceleration.\n\n");
    printf("3. computation of mechanical impuls.\n\n");
    printf("4. quit program.\n\n");

    scanf("%d", &choiceIndex);

    switch (choiceIndex)
    {
    case 1:

        printf("computing mechanical velocity. \n\n");
        printf("please enter the given distance in meters: \n\n");

        scanf("%f", &givenDistance);
        printf("please enter the given time in seconds: \n\n");

        scanf("%f", &givenTime);
        resultVelocity = computeVelocity(givenDistance, givenTime);

        printf("the Resulting velocity is : %.3f m/s.", resultVelocity);

        break;

    case 2:

        printf("computing mechanical acceleration. \n\n");
        printf("please enter the given velocity in m/s.: \n\n");

        scanf("%f", &givenVelocity);

        printf("please enter the given time in seconds: \n\n");

        scanf("%f", &givenTime);

        resultingAcceleration = computeAcceleration(givenVelocity, givenTime);

        printf("the Resulting acceleration is : %.3f m/s^2.",
               resultingAcceleration);

        break;

    case 3:
        printf("computing mechanical impuls. \n\n");
        printf("please enter the given mass in kg.: \n\n");

        scanf("%f", &givenMass);

        printf("please enter the given velocity in m/s.: \n\n");

        scanf("%f", &givenVelocity);

        resultingImpuls = computeImpuls(givenMass, givenVelocity);

        printf("the Resulting impuls is : %.3f kg*m/s.", resultingImpuls);

        break;

    case 4:

        printf("Quiting program!");
        break;

    default:
        break;
    }
}

void showMotionMenu(void)
{

    /*
     * quantities needed for the distance of an uniform linear motion.
     */
    velocity givenVelocity;
    time timeStart;
    time timeEnd;
    distance resultingDistance;

    /*
     * quantities needed for the distance of an uniformly accelerated linear
     * motion.
     */
    acceleration givenAcceleration;
    velocity velocityStart;
    velocity velocityEnd;
    // resultingDistance already exists.

    /*
     * quantities needed for the velocity of anuniformly accelerated linear
     * motion.
     */
    // givenAcceleration already exists.
    // timeStart already exists.
    // timeEnd already exists.
    // velocityStart already exists.
    velocity resultingVelocity;

    int choiceIndex;

    printf(
        "Please choose one of the following physical motions to compute: \n\n");
    printf("1. computation of distance for an uniform linear motion. \n\n");
    printf("2. computation of distance for an uniformly accelerated linear "
           "motion.\n\n");
    printf("3. computation of velocity for an uniformly accelerated linear "
           "motion.\n\n");
    printf("4. quit program.\n\n");

    scanf("%d", &choiceIndex);

    switch (choiceIndex)
    {
    case 1:
        printf("distance of an uniform linear motion. \n\n");

        printf("please enter the given velocity in m/s: \n\n");
        scanf("%f", &givenVelocity);

        printf("please enter the given Start time in seconds: \n\n");
        scanf("%f", &timeStart);

        printf("please enter the given End time in seconds: \n\n");
        scanf("%f", &timeEnd);

        resultingDistance =
            computeDistUniLinearMotion(givenVelocity, timeStart, timeEnd);
        printf("the Resulting doistance is : %.3f meters", resultingDistance);

        break;

    case 2:
        printf("distance of an uniformly accelerated linear motion. \n\n");

        printf("please enter the given Start velocity in m/s: \n\n");
        scanf("%f", &velocityStart);

        printf("please enter the given End velocity in m/s: \n\n");
        scanf("%f", &velocityEnd);

        printf("please enter the given acceleration in m/s^2: \n\n");
        scanf("%f", &givenAcceleration);

        resultingDistance = computeDistUniLinearAccMotion(
            velocityStart, velocityEnd, givenAcceleration);
        printf("the Resulting doistance is : %.3f meters", resultingDistance);

        break;

    case 3:

        printf("velocity of an uniformly accelerated linear motion. \n\n");

        printf("please enter the given acceleration in m/s^2: \n\n");
        scanf("%f", &givenAcceleration);

        printf("please enter the given Start velocity in m/s: \n\n");
        scanf("%f", &velocityStart);

        printf("please enter the given Start time in seconds: \n\n");
        scanf("%f", &timeStart);

        printf("please enter the given End in seconds: \n\n");
        scanf("%f", &timeEnd);

        resultingVelocity = computeVelocityUniAccMotion(
            givenAcceleration, timeStart, timeEnd, velocityStart);

        printf("the Resulting velocity is : %.3f m/s", resultingVelocity);

        break;

    case 4:

        printf("Quiting program!");

    default:
        break;
    }
}

void start(void)
{

    int choiceIndex;

    printf("Welcome to the physics calculator! Please choose one of the Points "
           "below!: \n\n");
    printf("1. computation of  mechanical quantities. \n\n");
    printf("2. computation of physical motions.\n\n");
    printf("3. quit program.\n\n");

    scanf("%d", &choiceIndex);

    switch (choiceIndex)
    {
    case 1:
        showMechQuantMenu();

        break;
    case 2:

        showMotionMenu();

        break;

    case 3:

        printf("Quiting program!..");

        break;

    default:
        break;
    }
}
