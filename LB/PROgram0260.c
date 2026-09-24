/*
***********************************************************************
Assignment 49
Assignment Name: Decision Making / Conditional Statements

Question 5:

A tax portal calculates income tax based on annual income using progressive slabs.
Only the amount in a slab is taxed at that slab’s rate.

Slabs:

    Up to ₹2,50,000 → 0%

    ₹2,50,001 to ₹5,00,000 → 5%

    ₹5,00,001 to ₹10,00,000 → 20%

    Above ₹10,00,000 → 30%

Input:

    Annual income (integer)

Validations:

    Income cannot be negative

Expected Output:

    Annual Income: ₹<income>
    Total Tax Payable: ₹<tax>
***********************************************************************
*/

#include<stdio.h>

int main()
{
    int iAnualIncome = 0;
    double dTax = 0 ;

    printf("Enter your Anual Income : ");
    scanf("%d",&iAnualIncome);

    if(iAnualIncome < 0)
    {
        printf("Income can Never be Negative!!!\n");
    }
    else
    {
        if(iAnualIncome <= 250000)
        {
            dTax = 0;
        }
        else if(iAnualIncome <= 500000)
        {
            dTax = (iAnualIncome - 250000) * 0.05;
        }
        else if(iAnualIncome <= 1000000)
        {
            dTax = (250000 * 0.05) + ((iAnualIncome - 500000) * 0.20);
        }
        else
        {
            dTax = (250000 * 0.05) + (500000 * 0.20) + ((iAnualIncome - 1000000) * 0.30);
        }

        printf("Annual Income: ₹%d\n", iAnualIncome);
        printf("Total Tax Payable: ₹%.2lf\n", dTax);
    }

    return 0; 
}