/*
***********************************************************************
Assignment 48
Assignment Name: Decision Making / Conditional Statements

Question 4:

An electricity company bills customers monthly based on how many units they consumed.

The billing is progressive, meaning units are charged in slabs.

The company wants a program to calculate bill accurately for any consumption.

Slabs:

    First 100 units → ₹5 per unit

    Next 100 units (101–200) → ₹7 per unit

    Above 200 units → ₹10 per unit

Input:

    One integer: units consumed

Validations:

    Units cannot be negative

Expected Output:

    Total Units Consumed: <units>
    Total Electricity Bill: ₹<amount>
***********************************************************************
*/

#include<stdio.h>

int main()
{
    int iUnits = 0;
    int iBill = 0;

    printf("Enter Units Consumed : ");
    scanf("%d",&iUnits);

    if(iUnits < 0)
    {
        printf("Units Can not be Negative\n");
    }
    else
    {
        if(iUnits <= 100)
        {
            iBill = iUnits * 5;
        }
        else if(iUnits <= 200)
        {
            iBill = (100 * 5) + ((iUnits - 100) * 7);
        }
        else
        {
            iBill = (100 * 5) + (100 * 7) + ((iUnits - 200) * 10);
        }

        printf("Total Units Consumed : %d\n",iUnits);
        printf("Total Electricity Bill : ₹ %d\n",iBill);
    }

    return 0 ;
}