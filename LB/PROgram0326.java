/*
Assignment 65 - Question 4

Given:

java python java c java python cpp

Generate:

java -> 3
python -> 2
c -> 1
cpp -> 1

Then find the most frequently occurring word.

Expected:

Most frequent word : java
Frequency : 3
*/

import java.util.HashMap;
import java.util.Map;

class PROgram0326
{
    public static void main(String A[])
    {
        String Arr[] =
        {
            "java",
            "python",
            "java",
            "c",
            "java",
            "python",
            "cpp"
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

        String strMax = "";
        int iMax = 0;

        for(Map.Entry<String, Integer> entry : hobj.entrySet())
        {
            System.out.println(entry.getKey() + " -> " +
                               entry.getValue());

            if(entry.getValue() > iMax)
            {
                iMax = entry.getValue();
                strMax = entry.getKey();
            }
        }

        System.out.println("Most frequent word : " + strMax);
        System.out.println("Frequency : " + iMax);
    }
}