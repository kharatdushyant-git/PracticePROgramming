/*

Q90) Write a Program that display Exponent of given number 

*/

import java.util.*;

class Logic
{
    public void calculatePower(int iBase, int iExpo) 
    {
        int iCnt = 0;
        long iAns = 1;

        for(iCnt = 1; iCnt <= iExpo; iCnt++)
        {
            iAns = iAns * iBase;
        }

        System.out.print("Answer is : "+iAns);

    }
}

class PROgram0090
{
    public static void main(String Luffy[])
    {
        Scanner sobj = new Scanner(System.in);
        Logic lobj = new Logic();
        
        int iValue1 = 0;
        int iValue2 = 0;

        System.out.print("Enter the Value : ");
        iValue1 = sobj.nextInt();

        System.out.print("Enter the Exponent : ");
        iValue2 = sobj.nextInt();


        lobj.calculatePower(iValue1, iValue2);


    }
}