/*
***********************************************************************
Assignment 50
Assignment Name: Decision Making & Looping

Question 3:

A courier counter calculates delivery charge by weight. Charges increase
when parcel is heavier.

Charges:

    Up to 1 kg → ₹50

    1–5 kg → ₹50 + ₹20/kg above 1 kg

    Above 5 kg → ₹150 + ₹30/kg above 5 kg

Input:

    Parcel weight in kg (integer)

Validations:

    Weight must be > 0

Expected Output:

    Parcel Weight: <weight> kg
    Courier Charge: ₹<amount>
***********************************************************************
*/

#include <stdio.h>

int main()
{
    int weight;
    int charge;

    printf("Enter parcel weight in kg: ");
    scanf("%d", &weight);

    if (weight <= 0)
    {
        printf("Invalid Input: Weight must be > 0.\n");
    }
    else
    {
        if (weight <= 1)
        {
            charge = 50;
        }
        else if (weight <= 5)
        {
            charge = 50 + ((weight - 1) * 20);
        }
        else
        {
            charge = 150 + ((weight - 5) * 30);
        }

        printf("Parcel Weight: %d kg\n", weight);
        printf("Courier Charge: ₹%d\n", charge);
    }

    return 0;
}