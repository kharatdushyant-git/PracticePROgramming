/*

Q77) Write a PROgram to Check wheter its painfrome or not

*/

import java.util.*;

class Logic
{
    void CheckPalindrome(int iNo1)
    {
        int iTemp = iNo1;
        int iRev = 0;
        int iDigit = 0;

        for(; iNo1 != 0; iNo1 = iNo1 / 10)
        {
            iDigit = iNo1 % 10;

            iRev = (iRev * 10) + iDigit;
            
        }

        if(iTemp == iRev)
        {
            System.out.println("Number is Palindrome");
        }
        else
        {
            System.out.println("Number is Not Palindrome");
        }
    }
}

class PROgram0077
{
    public static void main(String Luffy[])
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);
        
        System.out.print("Enter the number : ");
        iValue = sobj.nextInt();


        Logic Lobj = new Logic();

        Lobj.CheckPalindrome(iValue);

    }
}