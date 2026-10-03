/*
Assignment 55 - Question 2

Write a program to check whether a given number is Automorphic Number or not.

A number is Automorphic if its square ends with the same digits as the number.

Input:
One integer num

Output:
Automorphic Number or Not Automorphic Number

Example:
Input: 25

Explanation:
25^2 = 625
625 ends with 25

Output:
Automorphic Number
*/

#include <stdio.h>

int main()
{
    int iNum = 0;
    int iSquare = 0;
    int iTemp = 0;
    int iDigits = 0;
    int iPower = 1;

    printf("Enter number: ");
    scanf("%d", &iNum);

    if(iNum < 0)
    {
        printf("Invalid Input\n");
        return 0;
    }

    iSquare = iNum * iNum;
    iTemp = iNum;

    if(iNum == 0)
    {
        printf("Automorphic Number\n");
        return 0;
    }

    while(iTemp > 0)
    {
        iDigits++;
        iTemp = iTemp / 10;
    }

    for(int iCnt = 1; iCnt <= iDigits; iCnt++)
    {
        iPower = iPower * 10;
    }

    if(iSquare % iPower == iNum)
    {
        printf("Automorphic Number\n");
    }
    else
    {
        printf("Not Automorphic Number\n");
    }

    return 0;
}
