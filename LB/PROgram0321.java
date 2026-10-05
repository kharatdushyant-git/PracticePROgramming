/*
Assignment 64 - Question 4

A banking application receives transaction IDs:

TX101
TX102
TX103
TX101
TX104
TX102

Identify duplicate transaction IDs.

Expected output:

Duplicate transactions:
TX101
TX102
*/

import java.util.HashMap;

class PROgram0321
{
    public static void main(String A[])
    {
        String Arr[] =
        {
            "TX101",
            "TX102",
            "TX103",
            "TX101",
            "TX104",
            "TX102"
        };

        HashMap<String, Integer> hobj =
            new HashMap<String, Integer>();

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

        System.out.println("Duplicate transactions:");

        for(int i = 0; i < Arr.length; i++)
        {
            if(hobj.get(Arr[i]) > 1)
            {
                System.out.println(Arr[i]);

                hobj.put(Arr[i], 1);
            }
        }
    }
}