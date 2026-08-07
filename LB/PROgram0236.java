/*

Q236) Write a Java program to accept a file name from the user
and open that file.

*/

import java.io.*;
import java.util.*;

class PROgram0236
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name : ");
        String FileName = sobj.nextLine();

        File fobj = new File(FileName);

        if(fobj.exists())
        {
            System.out.println("File opened successfully.");
        }
        else
        {
            System.out.println("File does not exist.");
        }

        sobj.close();
    }
}