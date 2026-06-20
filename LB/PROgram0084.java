/*

Q84) Write a PROgram that print  Summation of even and Odd number seperatly

*/

import java.util.*;

class Logic
{
    void SumEvenOddDigit(int iNo1)
    {
        int iCnt = 0;
        int iDigit = 0;
        int iEven = 0;
        int iOdd = 0;

        while(;iNo1 != 0;)              
        {
            iDigit = iNo1% 10;

            if(iDigit % 2 == 0)
            {
                iEven += iDigit;
            }
            else
            {   
                iOdd += iDigit;
            }
            
            iNo1 = iNo1 /10;
        }

        System.out.println("Summation of All Even Number are : "+iEven);
        System.out.println("Summation of All Odd Number are : "+iOdd);
        
    }

}

class PROgram0084   
{
    public static void main(String Luffy[])
    {
        int iValue1 = 0;
        

        Scanner sobj = new Scanner(System.in);
        
        System.out.print("Enter the the First number : ");
        iValue1 = sobj.nextInt();

        Logic Lobj = new Logic();

        Lobj.SumEvenOddDigit(iValue1);

    }
}