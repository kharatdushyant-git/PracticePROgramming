/*
***********************************************************************
Assignment 51
Assignment Name: Logic Building Assignment

Question 3:

User enters usage: calls(min), data(GB), SMS(count).
App suggests the cheapest plan among 4 plans.

Input:
    mins, gb, sms

Output:
    recommendedPlan, totalCost

Twist:
    if usage exceeds plan limits, add per-unit extra
***********************************************************************
*/

#include <stdio.h>

int main()
{
    int iMins = 0;
    int iSms = 0;

    double dGb = 0.0;

    double dPlan1Cost = 0.0;
    double dPlan2Cost = 0.0;
    double dPlan3Cost = 0.0;
    double dPlan4Cost = 0.0;

    double dLowestCost = 0.0;

    int iPlan = 1;

    printf("Enter call minutes: ");
    scanf("%d", &iMins);

    printf("Enter data in GB: ");
    scanf("%lf", &dGb);

    printf("Enter SMS count: ");
    scanf("%d", &iSms);

    if (iMins < 0 || dGb < 0 || iSms < 0)
    {
        printf("Invalid Input: Usage values cannot be negative.\n");
    }
    else
    {
        dPlan1Cost = 199;

        if (iMins > 500)
        {
            dPlan1Cost = dPlan1Cost + (iMins - 500) * 0.50;
        }

        if (dGb > 2)
        {
            dPlan1Cost = dPlan1Cost + (dGb - 2) * 20;
        }

        if (iSms > 100)
        {
            dPlan1Cost = dPlan1Cost + (iSms - 100) * 0.20;
        }

        dPlan2Cost = 299;

        if (iMins > 1000)
        {
            dPlan2Cost = dPlan2Cost + (iMins - 1000) * 0.40;
        }

        if (dGb > 5)
        {
            dPlan2Cost = dPlan2Cost + (dGb - 5) * 15;
        }

        if (iSms > 200)
        {
            dPlan2Cost = dPlan2Cost + (iSms - 200) * 0.15;
        }

        /* Plan 3 */
        dPlan3Cost = 399;

        if (iMins > 1500)
        {
            dPlan3Cost = dPlan3Cost + (iMins - 1500) * 0.30;
        }

        if (dGb > 10)
        {
            dPlan3Cost = dPlan3Cost + (dGb - 10) * 10;
        }

        if (iSms > 500)
        {
            dPlan3Cost = dPlan3Cost + (iSms - 500) * 0.10;
        }

        /* Plan 4 */
        dPlan4Cost = 499;

        if (iMins > 2500)
        {
            dPlan4Cost = dPlan4Cost + (iMins - 2500) * 0.20;
        }

        if (dGb > 20)
        {
            dPlan4Cost = dPlan4Cost + (dGb - 20) * 8;
        }

        if (iSms > 1000)
        {
            dPlan4Cost = dPlan4Cost + (iSms - 1000) * 0.05;
        }

        dLowestCost = dPlan1Cost;

        if (dPlan2Cost < dLowestCost)
        {
            dLowestCost = dPlan2Cost;
            iPlan = 2;
        }

        if (dPlan3Cost < dLowestCost)
        {
            dLowestCost = dPlan3Cost;
            iPlan = 3;
        }

        if (dPlan4Cost < dLowestCost)
        {
            dLowestCost = dPlan4Cost;
            iPlan = 4;
        }

        printf("\nRecommended Plan: Plan %d\n", iPlan);
        printf("Total Cost: ₹%.2lf\n", dLowestCost);
    }

    return 0;
}