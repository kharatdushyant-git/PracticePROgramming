/*
Assignment 54 - Question 3

Write a program to check whether a given number is a Perfect Number
or not.

A number is Perfect if the sum of all proper divisors
(excluding the number itself) is equal to the number.

Input:
One integer num

Output:
Perfect Number or Not Perfect Number

Example:
Input: 28

Explanation:
Divisors = 1, 2, 4, 7, 14
Sum = 28

Output:
Perfect Number
*/

import java.util.Scanner;

class Program0279
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNum = 0;
        int iSum = 0;

        System.out.print("Enter number: ");
        iNum = sobj.nextInt();

        if(iNum <= 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        for(int iCnt = 1; iCnt < iNum; iCnt++)
        {
            if(iNum % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        if(iSum == iNum)
        {
            System.out.println("Perfect Number");
        }
        else
        {
            System.out.println("Not Perfect Number");
        }
    }
}