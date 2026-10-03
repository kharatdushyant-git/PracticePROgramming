/*
Assignment 54 - Question 1

Write a program to check whether a given number is a Strong Number or not.

A number is called Strong Number if the sum of factorials of each
digit is equal to the number itself.

Input:
One integer num

Output:
Print Strong Number or Not Strong Number

Example:
Input: 145

Explanation:
1! + 4! + 5! = 1 + 24 + 120 = 145

Output:
Strong Number
*/

import java.util.Scanner;

class Program0277
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNum = 0;
        int iTemp = 0;
        int iDigit = 0;
        int iFactorial = 0;
        int iSum = 0;

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

            iFactorial = 1;

            for(int iCnt = 1; iCnt <= iDigit; iCnt++)
            {
                iFactorial = iFactorial * iCnt;
            }

            iSum = iSum + iFactorial;

            iTemp = iTemp / 10;
        }

        if(iSum == iNum)
        {
            System.out.println("Strong Number");
        }
        else
        {
            System.out.println("Not Strong Number");
        }
    }
}
