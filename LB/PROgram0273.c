/*
***********************************************************************
Assignment 52
Assignment Name: Logic Building Assignment

Question 3:

A fitness app records steps for 7 days. It wants to show how many days
user achieved the goal and what the highest step count was.

Input:

    7 integers (steps)

Validations:

    Steps must be ≥ 0

Expected Output:

    Goal Achieved Days: <count>
    Maximum Steps in Week: <value>
***********************************************************************
*/

#include <stdio.h>

int main()
{
    int iSteps = 0;
    int iDay = 0;
    int iGoalAchievedDays = 0;
    int iMaximumSteps = 0;

    /* The question does not specify the goal, so 10000 is assumed. */
    int iStepGoal = 10000;

    for (iDay = 1; iDay <= 7; iDay++)
    {
        printf("Enter steps for day %d: ", iDay);
        scanf("%d", &iSteps);

        if (iSteps < 0)
        {
            printf("Invalid Input: Steps must be >= 0.\n");
            return 0;
        }

        if (iDay == 1 || iSteps > iMaximumSteps)
        {
            iMaximumSteps = iSteps;
        }

        if (iSteps >= iStepGoal)
        {
            iGoalAchievedDays++;
        }
    }

    printf("Goal Achieved Days: %d\n", iGoalAchievedDays);
    printf("Maximum Steps in Week: %d\n", iMaximumSteps);

    return 0;
}