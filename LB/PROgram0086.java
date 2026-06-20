/*

Q86) Write a Program that Chcek its year or not

*/

import java.util.*;

class Logic
{
    void CheckLeapYear(int iYear)
    {

        boolean isLeap = iYear % 400 == 0 || (iYear % 4 == 0 && iYear % 100 != 0);

        System.out.println(isLeap ? iYear+" Leap Year" : iYear+" Not Leap Year");             //Condition ? Value 1 : value (ternay Oprator)

    }

}

class PROgram0086
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;

        System.out.print("Enter the year : ");
        iValue1 = sobj.nextInt();

        Logic lobj = new Logic();
        lobj.CheckLeapYear(iValue1);
    }
}