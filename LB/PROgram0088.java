/*

Q88) Write a Program that Chcek its divisible by 5 and 11 or not

*/

import java.util.*;

class Logic
{
    void CheckDivisible(int iNo1)
    {

        boolean iCheck = (iNo1 % 5 == 0) && (iNo1 % 11 ==0);

        System.out.println(iCheck ? iNo1+" is Divisible by 5 And 11" : iNo1+" is Not Divisible by 5 And 11");             //Condition ? Value 1 : value (ternay Oprator)

    }

}

class PROgram0088
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;

        System.out.print("Enter the Number : ");
        iValue1 = sobj.nextInt();

        Logic lobj = new Logic();
        lobj.CheckDivisible(iValue1);
    }
}