/*
Assignment 66 - Question 1

Find Two Transactions Matching a Target

A customer made transactions:

1200 500 700 300 1500

Find whether two transactions have a combined value of:

2000

Output:

500 + 1500 = 2000
*/

import java.util.HashSet;

class PROgram0328
{
    public static void main(String A[])
    {
        int Arr[] = {1200, 500, 700, 300, 1500};
        int iTarget = 2000;

        HashSet<Integer> hobj = new HashSet<Integer>();

        for(int i = 0; i < Arr.length; i++)
        {
            int iRequired = iTarget - Arr[i];

            if(hobj.contains(iRequired))
            {
                System.out.println(iRequired + " + " +
                                   Arr[i] + " = " + iTarget);
                return;
            }

            hobj.add(Arr[i]);
        }

        System.out.println("No matching transactions found");
    }
}