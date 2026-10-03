/*
Assignment 54 - Question 5

Write a program to check whether a given number is Palindrome or not.

A number is Palindrome if it remains the same when reversed.

Input:
One integer num

Output:
Palindrome Number or Not Palindrome Number

Example:
Input: 121

Reverse: 121

Output:
Palindrome Number
*/

import java.util.Scanner;

class PROgram0281
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNum = 0;
        int iTemp = 0;
        int iDigit = 0;
        int iReverse = 0;

        System.out.print("Enter number: ");
        iNum = sobj.nextInt();

        if(iNum < 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        iTemp = iNum;

        while(iTemp > 0)
        {
            iDigit = iTemp % 10;

            iReverse = (iReverse * 10) + iDigit;

            iTemp = iTemp / 10;
        }

        if(iReverse == iNum)
        {
            System.out.println("Palindrome Number");
        }
        else
        {
            System.out.println("Not Palindrome Number");
        }
    }
}