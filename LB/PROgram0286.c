/*
Assignment 54 - Question 4

Write a program to check whether a given number is Disarium Number or not.

A number is Disarium if the sum of digits raised to their position
(starting from 1) equals the number.

Input:
One integer num

Output:
Disarium Number or Not Disarium Number

Example:
Input: 135

Explanation:
1^1 + 3^2 + 5^3
= 1 + 9 + 125
= 135

Output:
Disarium Number
*/

#include <stdio.h>

int main()
{
    int iNum = 0;
    int iTemp = 0;
    int iDigit = 0;
    int iCount = 0;
    int iPosition = 0;
    int iPower = 0;
    int iSum = 0;

    printf("Enter number: ");
    scanf("%d", &iNum);

    if(iNum < 0)
    {
        printf("Invalid Input\n");
        return 0;
    }

    iTemp = iNum;

    while(iTemp > 0)
    {
        iCount++;
        iTemp = iTemp / 10;
    }

    iTemp = iNum;
    iPosition = iCount;

    while(iTemp > 0)
    {
        iDigit = iTemp % 10;

        iPower = 1;

        for(int iCnt = 1; iCnt <= iPosition; iCnt++)
        {
            iPower = iPower * iDigit;
        }

        iSum = iSum + iPower;

        iTemp = iTemp / 10;
        iPosition--;
    }

    if(iSum == iNum)
    {
        printf("Disarium Number\n");
    }
    else
    {
        printf("Not Disarium Number\n");
    }

    return 0;
}
