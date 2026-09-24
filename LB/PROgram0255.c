/*
***********************************************************************
Assignment 48
Assignment Name: Decision Making / Conditional Statements

Question 5:

An e-commerce platform wants to compute final payable amount at checkout.

Discounts are based on purchase amount, and premium members receive an
extra discount after the main discount.

Discount Rules:

    Amount > 5000 → 20% discount

    Amount > 3000 → 10% discount

    Otherwise → no discount

    Premium members → extra 5% discount on the discounted amount

Input:

    Purchase amount (double)
    Membership type (premium/basic)

Validations:

    Amount must be >= 0

    Membership type must be valid

Expected Output:

    Final Payable Amount: ₹<amount>
***********************************************************************
*/

#include<stdio.h>
#include<string.h>

int main()
{
    double dAmount = 0.0;
    double dDiscount = 0.0;
    double dFinalAmount = 0.0;
    char Membership[20];

    printf("ENter the Amount : ");
    scanf("%lf",&dAmount);

    printf("Enter the Type of Membership (premium / basic): ");
    scanf("%s",Membership);

    if(dAmount < 0)
    {
        printf("Invalid Amount : \n");
    }
    else if(strcmp(Membership, "premium") != 0 && strcmp(Membership, "basic") != 0)
    {
        printf("Inavlid Membership \n");
    }
    else
    {
        if(dAmount > 5000)
        {
            dDiscount = dAmount * 0.20;
        }
        else if(dAmount > 3000)
        {
            dDiscount = dAmount * 0.10;
        }
        else
        {
            dDiscount = 0;
        }

        dFinalAmount = dAmount - dDiscount;

        if(strcmp(Membership, "premium") == 0)
        {
            dFinalAmount = dFinalAmount - (dFinalAmount * 0.05);
        }

        printf("Final Payable Amount : ₹ %.2lf\n",dFinalAmount);
    }

    return 0 ;
}