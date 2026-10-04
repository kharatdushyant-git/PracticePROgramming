/*
Assignment 63 - Question 1

Extend the previous assignment to distinguish between files and directories.

Expected Output:

[FILE] Demo.txt
[FILE] Student.txt
[FILE] Java.pdf
[DIR] Images
[DIR] Backup

For files, also display their sizes.

Example:

[FILE] Demo.txt       450 bytes
[FILE] Java.pdf       24500 bytes
[DIR] Images

This assignment should help students understand how an FTP server generates a directory listing.
*/

import java.io.File;
import java.util.Scanner;

class Question1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter directory:");
        String DirectoryName = sobj.nextLine();

        File fobj = new File(DirectoryName);

        if(!fobj.exists())
        {
            System.out.println("Directory does not exist");
        }
        else if(!fobj.isDirectory())
        {
            System.out.println("Specified path is not a directory");
        }
        else
        {
            File Arr[] = fobj.listFiles();

            if(Arr != null)
            {
                for(int i = 0; i < Arr.length; i++)
                {
                    if(Arr[i].isFile())
                    {
                        System.out.println("[FILE] " + Arr[i].getName() +
                                           "       " + Arr[i].length() + " bytes");
                    }
                    else if(Arr[i].isDirectory())
                    {
                        System.out.println("[DIR]  " + Arr[i].getName());
                    }
                }
            }
        }

        sobj.close();
    }
}