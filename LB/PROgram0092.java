/*

Q92) Write a PROgram that Accept a Number from user and display reverse till 1

*/

import java.util.Scanner;

class Logic
{
    void Reverse(int iNo1)
    {
        int iCnt = 0;
        int iEsum = 0;

        for(iCnt = iNo1; iCnt >= 1; iCnt--)
        {
            System.out.println(iCnt);
        }

    }
}

class PROgram0092
{
    public static void main(String luffy[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;

        System.out.println("Enter the Number : ");
        iValue1 = sobj.nextInt();

        Logic lobj = new Logic();
        lobj.Reverse(iValue1);

    }
}
