/*
***********************************************************************
Assignment 49
Assignment Name: Decision Making / Conditional Statements

Question 3:

A warehouse has a product in stock. Every time a customer places an order,
the system must check if enough stock exists.

If possible, fulfill it and update remaining stock. If stock becomes very low,
show alert.

Rules:

    If requested quantity > available stock → order fails

    Else deduct quantity

    If remaining stock < 5 → print low stock alert

Input:

    Current stock (integer)

    Requested quantity (integer)

Validations:

    Stock cannot be negative

    Requested quantity must be > 0

Expected Output:

    If successful:
    Order Processed Successfully.
    Remaining Stock: <value>

    If remaining < 5 also print:
    Low Stock Alert!

    If failed:
    Order Failed: Insufficient Stock.
***********************************************************************
*/

#include<stdio.h>

int main()
{
    int iStock = 0;
    int iQuantity = 0;

    printf("Enter the Current Stock : ");
    scanf("%d",&iStock);

    printf("Enter the Quantity : ");
    scanf("%d",&iQuantity);

    if (iStock < 0)
    {
        printf("Invalid Input: Stock cannot be negative.\n");
    }
    else if (iQuantity <= 0)
    {
        printf("Invalid Input: Requested quantity must be > 0.\n");
    }
    else if(iQuantity > iStock)
    {
        printf("Order Failed: Insufficient Stock.\n");
    }
    else
    {
        iStock = iStock - iQuantity;

        printf("Order Processed Successfully.\n");
        printf("Remaining Stock: %d\n",iStock);

        if(iStock < 5)
        {
            printf("Low Stock Alert!\n");
        }
    }

    return 0 ;
}