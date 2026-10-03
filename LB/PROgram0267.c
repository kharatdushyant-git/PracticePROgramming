/*
***********************************************************************
Assignment 51
Assignment Name: Logic Building Assignment

Question 2:

Base fare depends on distance slabs. Add charges for class
(Sleeper/AC2A/AC). If booking within 24 hours, add Tatkal 30%.
Senior citizen gets 40% discount.

Input:
    distance, classType, bookingHoursBefore, age

Output:
    finalFare + reason breakdown
***********************************************************************
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int iDistance = 0;
    int iBookingHoursBefore = 0;
    int iAge = 0;

    double dBaseFare = 0.0;
    double dClassCharge = 0.0;
    double dTatkalCharge = 0.0;
    double dSeniorDiscount = 0.0;
    double dFinalFare = 0.0;

    char szClassType[20] = "";

    printf("Enter distance in km: ");
    scanf("%d", &iDistance);

    printf("Enter class type (Sleeper/AC2A/AC): ");
    scanf("%s", szClassType);

    printf("Enter booking hours before journey: ");
    scanf("%d", &iBookingHoursBefore);

    printf("Enter age: ");
    scanf("%d", &iAge);

    if (iDistance < 0 || iBookingHoursBefore < 0 || iAge < 0)
    {
        printf("Invalid Input: Values cannot be negative.\n");
    }
    else if (strcmp(szClassType, "Sleeper") != 0 &&
             strcmp(szClassType, "AC2A") != 0 &&
             strcmp(szClassType, "AC") != 0)
    {
        printf("Invalid Input: Invalid class type.\n");
    }
    else
    {
        if (iDistance <= 100)
        {
            dBaseFare = 100;
        }
        else if (iDistance <= 300)
        {
            dBaseFare = 200;
        }
        else
        {
            dBaseFare = 400;
        }

        if (strcmp(szClassType, "Sleeper") == 0)
        {
            dClassCharge = 0;
        }
        else if (strcmp(szClassType, "AC2A") == 0)
        {
            dClassCharge = 100;
        }
        else
        {
            dClassCharge = 150;
        }

        dFinalFare = dBaseFare + dClassCharge;

        if (iBookingHoursBefore <= 24)
        {
            dTatkalCharge = dFinalFare * 0.30;
            dFinalFare = dFinalFare + dTatkalCharge;
        }

        if (iAge >= 60)
        {
            dSeniorDiscount = dFinalFare * 0.40;
            dFinalFare = dFinalFare - dSeniorDiscount;
        }

        printf("\nBase Fare: ₹%.2lf\n", dBaseFare);
        printf("Class Charge: ₹%.2lf\n", dClassCharge);
        printf("Tatkal Charge: ₹%.2lf\n", dTatkalCharge);
        printf("Senior Citizen Discount: ₹%.2lf\n", dSeniorDiscount);
        printf("Final Fare: ₹%.2lf\n", dFinalFare);
    }

    return 0;
}