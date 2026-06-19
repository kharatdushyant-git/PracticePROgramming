/*

Q81) Write a PROgram to find its prime or not

*/

import java.util.*;
class Logic
{
    void CheckPrime(int iNo1)
    {
        if(iNo1  iNo1 == 1)
        {
            System.out.print("The Given number is Prime");
        }
        else
        {
            System.out.print("The Given number is Not Prime");
        }

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