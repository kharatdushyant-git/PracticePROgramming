/*

Q93) Write a PROgram that Accept a Number and check whether its perfect number or not

*/

import java.util.Scanner;

class Logic
{
    boolean Perfect(int iNo)
    {
        int iSum = 0;

        for(int iCnt = 1; iCnt <= iNo / 2; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        return (iSum == iNo);
    }
}

class PROgram0093
{
    public static void main(String luffy[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the Number : ");
        int iValue = sobj.nextInt();

        Logic lobj = new Logic();

        if(lobj.Perfect(iValue))
        {
            System.out.println("Given number is Perfect Number");
        }
        else
        {
            System.out.println("Given number is NOT Perfect Number");
        }
    }
}