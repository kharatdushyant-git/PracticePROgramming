/*

Q78) Write a PROgram to find maximum of twow number

*/

import java.util.*;

class Logic
{
    void CheckMax(int iNo1, int iNo2)
    {
      if(iNo1 > iNo2)
      {
        System.out.print("Maximum number is : "+ iNo1);
      }
      else
      {
        System.out.print("Maximum number is : "+ iNo2);
      }

    }
}

class PROgram0078
{
    public static void main(String Luffy[])
    {
        int iValue1 = 0;
        int iValue2 = 0;

        Scanner sobj = new Scanner(System.in);
        
        System.out.print("Enter the the First number : ");
        iValue1 = sobj.nextInt();

        System.out.print("Enter the the Second number : ");
        iValue2 = sobj.nextInt();

        Logic Lobj = new Logic();

        Lobj.CheckMax(iValue1, iValue2);

    }
}