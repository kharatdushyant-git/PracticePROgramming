/*
Assignment 62 - Question 5

Write a Java application that accepts the path of a directory and displays all files and directories present inside it.

Example:

Enter directory:
Marvellous

Contents:

Demo.txt
Student.txt
Java.pdf
Images
Backup

Requirements:
Check whether the supplied path:
Exists
Is actually a directory
Display all its contents.
*/

import java.io.File;
import java.util.Scanner;

class PROgram0312
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
            System.out.println("\nContents:\n");

            File Arr[] = fobj.listFiles();

            if(Arr != null)
            {
                for(int i = 0; i < Arr.length; i++)
                {
                    System.out.println(Arr[i].getName());
                }
            }
        }

        sobj.close();
    }
}