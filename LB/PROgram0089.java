/*

Q89) Write a Program that display all digits of number

*/

import java.util.*;

class Logic
{
    void Digits(int iNo1)
    {
        int iCnt = 0;

        String str = String.valueOf(iNo1);

        System.out.println("All Digits of Given Number are : ");

        for(iCnt = 0; iCnt < str.length(); iCnt ++)
        {
            System.out.println(str.charAt(iCnt));
        }

        //if String is not allowed
        
    }

}

class PROgram0089
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;

        System.out.print("Enter the Number : ");
        iValue1 = sobj.nextInt();

        Logic lobj = new Logic();
        lobj.Digits(iValue1);
    }
}