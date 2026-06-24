/*

Q94) Write a PROgram that Accept a Number and check whether its lagest Digit or not

*/

import java.util.Scanner;

class Logic
{
    void FindLargestDigit(int iNo)
    {
        int iDigit = 0;
        int iLarge = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit > iLarge)
            {
                iLarge = iDigit;
            }

            iNo = iNo / 10;
        }

        System.out.println("Largest Digit is : " + iLarge);
    }
}

class PROgram0094
{
    public static void main(String luffy[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the Number : ");
        int iValue = sobj.nextInt();

        Logic lobj = new Logic();
        lobj.FindLargestDigit(iValue);
    }
}