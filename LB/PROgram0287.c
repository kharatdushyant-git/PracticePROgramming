/*
Assignment 54 - Question 5

Write a program to check whether a given number is Trimorphic Number or not.

A number is Trimorphic if its cube ends with the number itself.

Input:
One integer num

Output:
Trimorphic Number or Not Trimorphic Number

Example:
Input: 4

Explanation:
4^3 = 64
64 ends with 4

Output:
Trimorphic Number
*/

#include <stdio.h>

int main()
{
    int iNum = 0;
    int iCube = 0;
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

    iCube = iNum * iNum * iNum;
    iTemp = iNum;

    if(iNum == 0)
    {
        printf("Trimorphic Number\n");
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

    if(iCube % iPower == iNum)
    {
        printf("Trimorphic Number\n");
    }
    else
    {
        printf("Not Trimorphic Number\n");
    }

    return 0;
}
