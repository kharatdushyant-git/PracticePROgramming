/*
***********************************************************************
Assignment 52
Assignment Name: Logic Building Assignment

Question 1:

A hotel charges ₹3000 per day. For long stays, hotel provides discount
to retain customers.

Rules:

    ₹3000/day

    If stay > 7 days → 5% discount on total bill

Input:

    Number of days stayed

Validations:

    Days must be ≥ 0

Expected Output:

    Total Stay Duration: <days> days
    Final Bill Amount: ₹<amount>
***********************************************************************
*/

#include <stdio.h>

int main()
{
    int iDays = 0;
    double dTotalBill = 0.0;
    double dDiscount = 0.0;
    double dFinalBill = 0.0;

    printf("Enter number of days stayed: ");
    scanf("%d", &iDays);

    if (iDays < 0)
    {
        printf("Invalid Input: Days must be >= 0.\n");
    }
    else
    {
        dTotalBill = iDays * 3000;

        if (iDays > 7)
        {
            dDiscount = dTotalBill * 0.05;
        }

        dFinalBill = dTotalBill - dDiscount;

        printf("Total Stay Duration: %d days\n", iDays);
        printf("Final Bill Amount: ₹%.2lf\n", dFinalBill);
    }

    return 0;
}