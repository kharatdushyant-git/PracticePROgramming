/*

Q83) Write a PROgram that print all Odd number till N

*/

import java.util.*;

class Logic
{
    void PrintOdd(int iNo1)
    {
        int iCnt = 0;

        System.out.println("All Odd Number are : ");

        //Optimal Solution
        for(iCnt = 1; iCnt <= iNo1; iCnt += 2)     //Old loop = for(icnt = 0; iCnt <= iNo1; iCnt++)          
        {
            if(iCnt % 2 != 0)
            {
                System.out.println(iCnt);
            }
        }
        
    }

}

class PROgram0083   
{
    public static void main(String Luffy[])
    {
        int iValue1 = 0;
        

        Scanner sobj = new Scanner(System.in);
        
        System.out.print("Enter the the First number : ");
        iValue1 = sobj.nextInt();

        Logic Lobj = new Logic();

        Lobj.PrintOdd(iValue1);

    }
}