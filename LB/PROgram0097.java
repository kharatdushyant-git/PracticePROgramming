/*

Q97) Write a PROgram that Accept a Number and count even and odd number till 1 to N

*/

import java.util.Scanner;

class Logic
{
    void CountEvenOdd(int iNo)
    {
        int iEven = iNo / 2;
        int iOdd = (iNo + 1) / 2;

        System.out.println("Count of Even is : " + iEven);
        System.out.println("Count of Odd is : " + iOdd);
    }
}

class PROgram0097
{
    public static void main(String luffy[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the Number : ");
        int iValue = sobj.nextInt();

        Logic lobj = new Logic();
        lobj.CountEvenOdd(iValue);
    }
}