/*

Q79) Write a PROgram to find minimum of three number

*/

import java.util.*;

class Logic
{
    void CheckMini(int iNo1, int iNo2, int iNo3)
    {
        if((iNo1 < iNo2) && (iNo1 < iNo3))
        {
        System.out.print("Minimun number is : "+ iNo1);
        }
        else if((iNo2 < iNo2) && (iNo2 < iNo3))
        {
        System.out.print("Minimum number is : "+ iNo2);
        }
        else 
        {
        System.out.print("Minimum number is : "+ iNo3);
        }

    }
}

class PROgram0079
{
    public static void main(String Luffy[])
    {
        int iValue1 = 0;
        int iValue2 = 0;
        int iValue3 = 0;

        Scanner sobj = new Scanner(System.in);
        
        System.out.print("Enter the the First number : ");
        iValue1 = sobj.nextInt();

        System.out.print("Enter the the Second number : ");
        iValue2 = sobj.nextInt();

        System.out.print("Enter the the Third number : ");
        iValue3 = sobj.nextInt();

        Logic Lobj = new Logic();

        Lobj.CheckMini(iValue1, iValue2, iValue3);

    }
}