/*
Assignment 54 - Question 3

Write a program to check whether a given number is Spy Number or not.

A number is Spy if:
Sum of digits = Product of digits

Input:
One integer num

Output:
Spy Number or Not Spy Number

Example:
Input: 1124

Sum = 1 + 1 + 2 + 4 = 8
Product = 1 * 1 * 2 * 4 = 8

Output:
Spy Number
*/

#include <stdio.h>

int main()
{
    int iNum = 0;
    int iTemp = 0;
    int iDigit = 0;
    int iSum = 0;
    int iProduct = 1;

    printf("Enter number: ");
    scanf("%d", &iNum);

    if(iNum < 0)
    {
        printf("Invalid Input\n");
        return 0;
    }

    iTemp = iNum;

    if(iNum == 0)
    {
        iSum = 0;
        iProduct = 0;
    }
    else
    {
        while(iTemp > 0)
        {
            iDigit = iTemp % 10;

            iSum = iSum + iDigit;
            iProduct = iProduct * iDigit;

            iTemp = iTemp / 10;
        }
    }

    if(iSum == iProduct)
    {
        printf("Spy Number\n");
    }
    else
    {
        printf("Not Spy Number\n");
    }

    return 0;
}