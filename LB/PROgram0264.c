/*
***********************************************************************
Assignment 50
Assignment Name: Decision Making & Looping

Question 4:

A customer enters a store with a fixed budget. They pick items one by one
in a given order.

The cashier wants to know how many items can be purchased before money
becomes insufficient.

Input:

    Budget amount

    Number of items N

    N item prices

Validations:

    Budget >= 0

    N >= 0

    Each price > 0

Expected Output:

    Items Purchased: <count>
    Remaining Balance: ₹<amount>
***********************************************************************
*/

#include <stdio.h>

int main()
{
    double budget;
    double price;
    double remaining;
    int n;
    int i;
    int count = 0;

    printf("Enter budget amount: ");
    scanf("%lf", &budget);

    printf("Enter number of items: ");
    scanf("%d", &n);

    if (budget < 0)
    {
        printf("Invalid Input: Budget must be >= 0.\n");
    }
    else if (n < 0)
    {
        printf("Invalid Input: N must be >= 0.\n");
    }
    else
    {
        remaining = budget;

        for (i = 1; i <= n; i++)
        {
            printf("Enter price of item %d: ", i);
            scanf("%lf", &price);

            if (price <= 0)
            {
                printf("Invalid Input: Each price must be > 0.\n");
                return 0;
            }

            if (price <= remaining)
            {
                remaining = remaining - price;
                count++;
            }
            else
            {
                break;
            }
        }

        printf("Items Purchased: %d\n", count);
        printf("Remaining Balance: ₹%.2lf\n", remaining);
    }

    return 0;
}