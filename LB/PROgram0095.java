/*

Q95) Write a PROgram that Accept a Number and check whether its Smallest Digit or not

*/

import java.util.Scanner;

class Logic
{
    void FindSmallestDigit(int iNo)
    {
        int iDigit = 0;
        int iSmall = 9;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit < iSmall)
            {
                iSmall = iDigit;
            }

            iNo = iNo / 10;
        }

        System.out.println("Smallest Digit is : " + iSmall);
    }
}

class PROgram0095
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