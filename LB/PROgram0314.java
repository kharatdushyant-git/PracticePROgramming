/*
Assignment 63 - Question 2

Write a Java program that accepts a directory path and a filename from the user.

Search for the specified file inside the directory.

Example:

Enter directory:
ServerData

Enter file to search:
Demo.txt

File found

Name : Demo.txt
Size : 2450 bytes
Path : /ServerData/Demo.txt

If unavailable:

Demo.txt not found
*/

import java.io.File;
import java.util.Scanner;

class PROgram0314
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter directory:");
        String DirectoryName = sobj.nextLine();

        System.out.println("\nEnter file to search:");
        String FileName = sobj.nextLine();

        File dobj = new File(DirectoryName);

        if(!dobj.exists())
        {
            System.out.println("Directory does not exist");
        }
        else if(!dobj.isDirectory())
        {
            System.out.println("Specified path is not a directory");
        }
        else
        {
            File Arr[] = dobj.listFiles();
            boolean bFound = false;

            if(Arr != null)
            {
                for(int i = 0; i < Arr.length; i++)
                {
                    if(Arr[i].isFile() &&
                       Arr[i].getName().equals(FileName))
                    {
                        System.out.println("\nFile found\n");

                        System.out.println("Name : " + Arr[i].getName());
                        System.out.println("Size : " + Arr[i].length() + " bytes");
                        System.out.println("Path : " + Arr[i].getAbsolutePath());

                        bFound = true;
                        break;
                    }
                }
            }

            if(!bFound)
            {
                System.out.println("\n" + FileName + " not found");
            }
        }

        sobj.close();
    }
}