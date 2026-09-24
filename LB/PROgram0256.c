/*
***********************************************************************
Assignment 49
Assignment Name: Decision Making / Conditional Statements

Question 1:

A shopping mall parking gate records entry and exit duration in hours.

The parking system calculates charges based on the total hours a vehicle stayed.
Long-duration parking attracts additional penalty.

Rules:

    First 2 hours → ₹20 (flat)

    After 2 hours → ₹10 per extra hour

    If total hours > 10 → add ₹50 penalty

Input:

    Total parking hours (integer)

Validations:

    Hours cannot be negative

Expected Output:

    Total Parking Duration: <hours> hours
    Total Parking Fee: ₹<amount>
***********************************************************************
*/

#include<stdio.h>

int main()
{
    int iHour  = 0;
    int iFees = 0;

    printf("Enter Total Parking Hours : ");
    scanf("%d",&iHour);

    if(iHour < 0)
    {
        printf("Hour can not be Negative\n");
    }
    else
    {
        if(iHour <= 2)
        {
            iFees = 20;
        }
        else if(iHour > 2)
        {
            iFees = 20 + ((iHour - 2) * 10);
        }

        if(iHour > 10)
        {
            iFees = iFees + 50; 
        }

        printf("Total Parking Hour : %d\n",iHour);
        printf("Total Parking Fees : ₹ %d\n",iFees);
    }

    return 0;
}