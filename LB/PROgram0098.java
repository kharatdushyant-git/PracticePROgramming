/*

Q98) Write a PROgram that Accept a Number and Display All factors

*/

import java.util.Scanner;

class Logic
{
    void Factors(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                System.out.println(iCnt);
            }
        }
        
    }
}

class PROgram0098
{
    public static void main(String luffy[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the Number : ");
        int iValue = sobj.nextInt();

        Logic lobj = new Logic();
        lobj.Factors(iValue);
    }
}