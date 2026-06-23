/*

Q91) Write a PROgram that find the sum all even number up to N

*/

import java.util.Scanner;

class Logic
{
    void SumAllEven(int iNo1)
    {
        int iCnt = 0;
        int iEsum = 0;

        for(iCnt = 0; iCnt <= iNo1; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iEsum = iEsum + iCnt;
            }    
        }

        System.out.println("summation of all even number is : "+iEsum);
    }
}

class PROgram0091
{
    public static void main(String luffy[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;

        System.out.println("Enter the Number : ");
        iValue1 = sobj.nextInt();

        Logic lobj = new Logic();
        lobj.SumAllEven(iValue1);

    }
}
