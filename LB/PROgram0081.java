/*

Q81) Write a PROgram to find its prime or not

*/

import java.util.*;

class Logic
{
    void CheckPrime(int iNo1)
    {
        int iCnt = 0;

        if(iNo1 <= 1)
        {
            System.out.println("The Given Number is Not Prime");
            return;
        }

        for(iCnt = 2; iCnt * iCnt <= iNo1; iCnt++)              //-/n Approach
        {
            if(iNo1 % iCnt == 0)
            {
                System.out.println("The Given Number is Not Prime");
                return;
            }
        }

        System.out.println("The Given Number is Prime");
        
    }
}

class PROgram0081
{
    public static void main(String Luffy[])
    {
        int iValue1 = 0;
        

        Scanner sobj = new Scanner(System.in);
        
        System.out.print("Enter the the First number : ");
        iValue1 = sobj.nextInt();

        Logic Lobj = new Logic();

        Lobj.CheckPrime(iValue1);

    }
}