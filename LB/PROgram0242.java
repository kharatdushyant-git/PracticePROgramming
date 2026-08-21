/*

Q242) Write a Java program to accept a file name from the user
and check whether that file is a regular file or not.

*/

import java.io.*;
import java.util.*;

class PROgram0242
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name : ");
        String FileName = sobj.nextLine();

        File fobj = new File(FileName);

        if(fobj.exists())
        {
            if(fobj.isFile())
            {
                System.out.println("It is a regular file.");
            }
            else
            {
                System.out.println("It is not a regular file.");
            }
        }
        else
        {
            System.out.println("File does not exist.");
        }

        sobj.close();
    }
}
