/*
Assignment 64 - Question 2

A messaging application wants to identify the first character in a message that occurs only once.

Input:

programming

Output:

First non-repeating character : p

The solution should preserve the original character order.
*/

import java.util.HashMap;

class PROgram0319
{
    public static void main(String A[])
    {
        String str = "programming";

        HashMap<Character, Integer> hobj =
            new HashMap<Character, Integer>();

        for(int i = 0; i < str.length(); i++)
        {
            char ch = str.charAt(i);

            if(hobj.containsKey(ch))
            {
                hobj.put(ch, hobj.get(ch) + 1);
            }
            else
            {
                hobj.put(ch, 1);
            }
        }

        for(int i = 0; i < str.length(); i++)
        {
            char ch = str.charAt(i);

            if(hobj.get(ch) == 1)
            {
                System.out.println("First non-repeating character : " + ch);
                break;
            }
        }
    }
}