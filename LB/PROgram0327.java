/*
Assignment 65 - Question 5

An e-commerce application records product IDs:

101 102 101 103 101 102 104 105 102 102 103

Find the top 2 most frequently purchased products.

Expected:

102 -> 4
101 -> 3
*/

import java.util.HashMap;
import java.util.Map;

class PROgram0327
{
    public static void main(String A[])
    {
        int Arr[] =
        {
            101, 102, 101, 103, 101, 102,
            104, 105, 102, 102, 103
        };

        HashMap<Integer, Integer> hobj =
            new HashMap<Integer, Integer>();

        for(int i = 0; i < Arr.length; i++)
        {
            if(hobj.containsKey(Arr[i]))
            {
                hobj.put(Arr[i], hobj.get(Arr[i]) + 1);
            }
            else
            {
                hobj.put(Arr[i], 1);
            }
        }

        int iFirstProduct = 0;
        int iFirstCount = 0;

        int iSecondProduct = 0;
        int iSecondCount = 0;

        for(Map.Entry<Integer, Integer> entry : hobj.entrySet())
        {
            int iProduct = entry.getKey();
            int iCount = entry.getValue();

            if(iCount > iFirstCount)
            {
                iSecondProduct = iFirstProduct;
                iSecondCount = iFirstCount;

                iFirstProduct = iProduct;
                iFirstCount = iCount;
            }
            else if(iCount > iSecondCount)
            {
                iSecondProduct = iProduct;
                iSecondCount = iCount;
            }
        }

        System.out.println(iFirstProduct + " -> " + iFirstCount);
        System.out.println(iSecondProduct + " -> " + iSecondCount);
    }
}