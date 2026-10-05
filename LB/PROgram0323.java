/*
Assignment 65 - Question 1

A browser wants to store only the last 5 visited websites.

Visits:

google.com
github.com
openai.com
oracle.com
stackoverflow.com
youtube.com

After all visits, history should contain:

github.com
openai.com
oracle.com
stackoverflow.com
youtube.com
*/

import java.util.ArrayDeque;

class PROgram0323
{
    public static void main(String A[])
    {
        ArrayDeque<String> history = new ArrayDeque<String>();

        String Arr[] =
        {
            "google.com",
            "github.com",
            "openai.com",
            "oracle.com",
            "stackoverflow.com",
            "youtube.com"
        };

        for(int i = 0; i < Arr.length; i++)
        {
            if(history.size() == 5)
            {
                history.removeFirst();
            }

            history.addLast(Arr[i]);
        }

        for(String str : history)
        {
            System.out.println(str);
        }
    }
}