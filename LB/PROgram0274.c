/*
***********************************************************************
Assignment 52
Assignment Name: Logic Building Assignment

Question 5:

A telecom company bills calls based on duration slabs. The system needs
to calculate final charge for a given call duration.

Rules:

    First 5 minutes free

    Next 10 minutes (6–15) → ₹1 per minute

    Beyond 15 → ₹2 per minute

Input:

    Call duration in minutes (integer)

Validations:

    Minutes must be ≥ 0

Expected Output:

    Call Duration: <minutes> minutes
    Total Call Charges: ₹<amount>
***********************************************************************
*/

#include <stdio.h>

int main()
{
    int iMinutes = 0;
    int iTotalCharge = 0;

    printf("Enter call duration in minutes: ");
    scanf("%d", &iMinutes);

    if (iMinutes < 0)
    {
        printf("Invalid Input: Minutes must be >= 0.\n");
    }
    else
    {
        if (iMinutes <= 5)
        {
            iTotalCharge = 0;
        }
        else if (iMinutes <= 15)
        {
            iTotalCharge = (iMinutes - 5) * 1;
        }
        else
        {
            iTotalCharge = (10 * 1) +
                           ((iMinutes - 15) * 2);
        }

        printf("Call Duration: %d minutes\n", iMinutes);
        printf("Total Call Charges: ₹%d\n", iTotalCharge);
    }

    return 0;
}