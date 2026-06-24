/*

Q99) Write a PROgram that Accept a Number and Display count of All factors

*/

import java.util.Scanner;

class Logic
{
    void CountFactors(int iNo)
    {
        int iCnt = 0;
        int iCnt2 = 0;

        for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iCnt2++;
            }
        }
        
        System.out.println("Count of Factor of Given number is : "+iCnt2);
    }
}

class PROgram0099
{
    public static void main(String luffy[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the Number : ");
        int iValue = sobj.nextInt();

        Logic lobj = new Logic();
        lobj.CountFactors(iValue);
    }
}