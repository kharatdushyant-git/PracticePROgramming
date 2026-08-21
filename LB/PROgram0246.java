/*

Q246) Write a Java program to accept directory name from user
and display all names of files from that directory which are
regular files.

*/

import java.io.*;
import java.util.*;

class PROgram0246
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter directory name : ");
        String DirName = sobj.nextLine();

        File fobj = new File(DirName);

        if(fobj.exists() && fobj.isDirectory())
        {
            File Arr[] = fobj.listFiles();

            System.out.println("Regular files are :");

            for(File file : Arr)
            {
                if(file.isFile())
                {
                    System.out.println(file.getName());
                }
            }
        }
        else
        {
            System.out.println("Directory does not exist.");
        }

        sobj.close();
    }
}
