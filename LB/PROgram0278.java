/*
Assignment 54 - Question 2

Write a program to check whether a given number is an Armstrong
Number or not.

A number is Armstrong if the sum of each digit raised to the
power of total digits is equal to the number.

Input:
One integer num

Output:
Armstrong Number or Not Armstrong Number

Example:
Input: 153

Explanation:
1^3 + 5^3 + 3^3 = 153

Output:
Armstrong Number
*/

import java.util.Scanner;

class Program0278
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNum = 0;
        int iTemp = 0;
        int iDigit = 0;
        int iCount = 0;
        int iSum = 0;
        int iPower = 0;

        System.out.print("Enter number: ");
        iNum = sobj.nextInt();

        if(iNum < 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        iTemp = iNum;

        if(iTemp == 0)
        {
            iCount = 1;
        }
        else
        {
            while(iTemp > 0)
            {
                iCount++;
                iTemp = iTemp / 10;
            }
        }

        iTemp = iNum;

        while(iTemp > 0)
        {
            iDigit = iTemp % 10;

            iPower = 1;

            for(int iCnt = 1; iCnt <= iCount; iCnt++)
            {
                iPower = iPower * iDigit;
            }

            iSum = iSum + iPower;

            iTemp = iTemp / 10;
        }

        if(iSum == iNum)
        {
            System.out.println("Armstrong Number");
        }
        else
        {
            System.out.println("Not Armstrong Number");
        }
    }
}
