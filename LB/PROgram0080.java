/*

Q80) Write a PROgram to find its multiplication table

*/

import java.util.*;
class Logic
{
    void MultiTable(int iNo1)
    {
        int iCnt = 0;
        int iMult = 1;

        for(iCnt = 1; iCnt <= 10; iCnt++)
        {
            iMult = iCnt * iNo1;

            System.out.print(" "+iMult);

        }

    }
}

class PROgram0080
{
    public static void main(String Luffy[])
    {
        int iValue1 = 0;
        

        Scanner sobj = new Scanner(System.in);
        
        System.out.print("Enter the the First number : ");
        iValue1 = sobj.nextInt();

        Logic Lobj = new Logic();

        Lobj.MultiTable(iValue1);

    }
}