/*
Assignment 64 - Question 1

A company records employee IDs whenever employees enter the office:

101 102 103 101 104 102 101 105

Write a Java program that displays how many times each employee entered the office.

Expected output:

101 -> 3
102 -> 2
103 -> 1
104 -> 1
105 -> 1
*/

import java.util.HashMap;
import java.util.Map;

class PROgram0318
{
    public static void main(String A[])
    {
        int Arr[] = {101, 102, 103, 101, 104, 102, 101, 105};

        HashMap<Integer, Integer> hobj = new HashMap<Integer, Integer>();

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

        for(Map.Entry<Integer, Integer> entry : hobj.entrySet())
        {
            System.out.println(entry.getKey() + " -> " + entry.getValue());
        }
    }
}