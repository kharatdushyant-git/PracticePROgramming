/*
Assignment 55    Question 1

Write a program to check whether a given number is Neon Number or not.

A number is Neon if the sum of digits of its square equals the number itself.

Input:
One integer num

Output:
Neon Number or Not Neon Number

Example:
Input: 9

Explanation:
9^2 = 81
Sum of digits = 8 + 1 = 9

Output:
Neon Number
*/

#include <stdio.h>

int main()
{
    int iNum = 0;
    int iSquare = 0;
    int iTemp = 0;
    int iDigit = 0;
    int iSum = 0;

    printf("Enter number: ");
    scanf("%d", &iNum);

    if(iNum < 0)
    {
        printf("Invalid Input\n");
        return 0;
    }

    iSquare = iNum * iNum;
    iTemp = iSquare;

    while(iTemp > 0)
    {
        iDigit = iTemp % 10;
        iSum = iSum + iDigit;
        iTemp = iTemp / 10;
    }

    if(iSum == iNum)
    {
        printf("Neon Number\n");
    }
    else
    {
        printf("Not Neon Number\n");
    }

    return 0;
}