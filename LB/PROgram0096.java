/*

Q96) Write a PROgram that Accept a Number and Display product of digits of given number

*/

import java.util.Scanner;

class Logic
{
    void FindSmallestDigit(int iNo)
    {
        int iDigit = 0;
        int iProduct = 1;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            iProduct = iProduct * iDigit;

            iNo = iNo / 10;
        }

        System.out.println("Smallest Digit is : " + iProduct);
    }
}

class PROgram0096
{
    public static void main(String luffy[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the Number : ");
        int iValue = sobj.nextInt();

        Logic lobj = new Logic();
        lobj.FindSmallestDigit(iValue);
    }
}