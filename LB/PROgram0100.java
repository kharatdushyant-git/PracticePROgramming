/*

Q100) Write a PROgram that Accept a Number and Display All number 1 to N that are Divisible by both 2 and 3

*/

import java.util.Scanner;

class Logic
{
    void ChkDvisible(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if((iCnt % 2 == 0 )&& (iCnt % 3 ==0))
            {
                System.out.println(iCnt);
            }
        } 
        
    }
}

class PROgram0100
{
    public static void main(String luffy[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the Number : ");
        int iValue = sobj.nextInt();

        Logic lobj = new Logic();
        lobj.ChkDvisible(iValue);
    }
}