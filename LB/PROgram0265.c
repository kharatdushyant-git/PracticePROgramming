/*
***********************************************************************
Assignment 50
Assignment Name: Decision Making & Looping

Question 5:

A phone OS shows different battery warnings. The user wants a program that
prints the correct battery status.

Rules:

    Battery <5% → Critical

    Battery <15% → Low

    Otherwise → Normal

Input:

    Battery percentage (integer)

Validations:

    0 to 100 only

Expected Output:

    Battery Percentage: <value>%
    Status: <Critical/Low/Normal>
***********************************************************************
*/

#include <stdio.h>

int main()
{
    int battery;

    printf("Enter battery percentage: ");
    scanf("%d", &battery);

    if (battery < 0 || battery > 100)
    {
        printf("Invalid Input: Battery percentage must be between 0 and 100.\n");
    }
    else
    {
        printf("Battery Percentage: %d%%\n", battery);

        if (battery < 5)
        {
            printf("Status: Critical\n");
        }
        else if (battery < 15)
        {
            printf("Status: Low\n");
        }
        else
        {
            printf("Status: Normal\n");
        }
    }

    return 0;
}