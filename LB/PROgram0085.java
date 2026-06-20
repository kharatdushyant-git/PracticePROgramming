/*

Q85) Write a PROgram to check whether i=the number is Positive, Negative, zero

*/

import java.util.*;

class Logic
{
    void Check(int iNo1)
    {
        if(iNo1 > 0)
        {
            System.out.println("The Given Number : "+iNo1+" is Positive ");
        }  
        else if(iNo1 < 0)
        {
            System.out.println("The Given Number : "+iNo1+" is Negative ");
        }
        else
        {
            System.out.println("The Given Number is Zero ");
        }      
    }

}

class PROgram0085
{
    public static void main(String Luffy[])
    {
        int iValue1 = 0;
        

        Scanner sobj = new Scanner(System.in);
        
        System.out.print("Enter the the First number : ");
        iValue1 = sobj.nextInt();

        Logic Lobj = new Logic();

        Lobj.Check(iValue1);

    }
}