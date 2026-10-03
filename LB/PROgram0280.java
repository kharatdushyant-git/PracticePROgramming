/*
Assignment 54 - Question 4

Write a program to check whether a given number is a Harshad
Number or not.

A number is Harshad if it is divisible by the sum of its digits.

Input:
One integer num

Output:
Harshad Number or Not Harshad Number

Example:
Input: 18

Explanation:
Sum of digits = 1 + 8 = 9
18 % 9 = 0

Output:
Harshad Number
*/

import java.util.Scanner;

class Program0280
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNum = 0;
        int iTemp = 0;
        int iDigit = 0;
        int iSum = 0;

        System.out.print("Enter number: ");
        iNum = sobj.nextInt();

        if(iNum <= 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        iTemp = iNum;

        while(iTemp > 0)
        {
            iDigit = iTemp % 10;
            iSum = iSum + iDigit;

            iTemp = iTemp / 10;
        }

        if(iNum % iSum == 0)
        {
            System.out.println("Harshad Number");
        }
        else
        {
            System.out.println("Not Harshad Number");
        }
    }
}