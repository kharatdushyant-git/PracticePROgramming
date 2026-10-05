/*
Assignment 66 - Question 2

Longest Consecutive Employee ID Sequence

Given IDs:

100
4
200
1
3
2
5

Find the longest consecutive sequence.

Output:

1 2 3 4 5

Length : 5
*/

import java.util.HashSet;

class PROgram0329
{
    public static void main(String A[])
    {
        int Arr[] = {100, 4, 200, 1, 3, 2, 5};

        HashSet<Integer> hobj = new HashSet<Integer>();

        for(int i = 0; i < Arr.length; i++)
        {
            hobj.add(Arr[i]);
        }

        int iLongest = 0;
        int iStart = 0;

        for(int i = 0; i < Arr.length; i++)
        {
            int iCurrent = Arr[i];

            if(!hobj.contains(iCurrent - 1))
            {
                int iCount = 1;
                int iNumber = iCurrent;

                while(hobj.contains(iNumber + 1))
                {
                    iNumber++;
                    iCount++;
                }

                if(iCount > iLongest)
                {
                    iLongest = iCount;
                    iStart = iCurrent;
                }
            }
        }

        for(int i = 0; i < iLongest; i++)
        {
            System.out.print((iStart + i) + " ");
        }

        System.out.println();
        System.out.println("Length : " + iLongest);
    }
}