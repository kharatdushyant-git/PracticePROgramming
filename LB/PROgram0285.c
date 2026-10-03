/*
Assignment 54 - Question 3

Write a program to check whether a given number is Sunny Number or not.

A number is Sunny if num + 1 is a perfect square.

Input:
One integer num

Output:
Sunny Number or Not Sunny Number

Example:
Input: 8

Explanation:
8 + 1 = 9
9 is a perfect square

Output:
Sunny Number
*/

#include <stdio.h>

int main()
{
    int iNum = 0;
    int iSquare = 0;
    int iCnt = 0;

    printf("Enter number: ");
    scanf("%d", &iNum);

    if(iNum < 0)
    {
        printf("Invalid Input\n");
        return 0;
    }

    iSquare = iNum + 1;

    for(iCnt = 0; iCnt * iCnt <= iSquare; iCnt++)
    {
        if(iCnt * iCnt == iSquare)
        {
            printf("Sunny Number\n");
            return 0;
        }
    }

    printf("Not Sunny Number\n");

    return 0;
}