/*

Q87) Write a Program that print grade based on marks

*/

import java.util.*;

class Logic
{
    void Grades(int iMarks)
    {

        String sResult = iMarks > 100 ? "Invalid Input" :
                         iMarks >= 75 ? "You have A Grade" :
                         iMarks >= 35 ? "You have B Grade" :
                         "You Failed";
                              
        System.out.println(sResult);
    }

}

class PROgram0087
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;

        System.out.print("Enter the Your Marks : ");
        iValue1 = sobj.nextInt();

        Logic lobj = new Logic();
        lobj.Grades(iValue1);
    }
}