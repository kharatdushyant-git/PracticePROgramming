/*

Q76) Write a PROgram to find the sum of Digits of Number

*/

import java.util.*;

class Logic
{
    void SumOfDigits(int iNo1)
    {
        int iCnt, iDigit = 0;
        int iSum = 0;

        for(; iNo1 != 0; )
        {
            iDigit = iNo1 % 10;

            iSum += iDigit;

            iNo1 = iNo1 /10;
        }

        System.out.println("Summation of Digits is : "+iSum);
    }
}

class PROgram0076
{
    public static void main(String Luffy[])
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);
        
        System.out.print("Enter the number : ");
        iValue = sobj.nextInt();


        Logic Lobj = new Logic();

        Lobj.SumOfDigits(iValue);

    }
}