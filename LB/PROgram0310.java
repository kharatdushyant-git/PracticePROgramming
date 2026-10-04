/*
Assignment 62 - Question 3

Write a Java program that accepts the names of a source file and destination file and copies all data from the source into the destination.

Example:

Enter source file:
Demo.txt

Enter destination file:
Backup.txt

File copied successfully

Requirements:
Use:
FileInputStream
FileOutputStream
Read data from the source and write it into the destination.
Do not use built-in file-copy methods.
The program should be capable of copying text as well as binary files.
*/

import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.Scanner;

class PROgram0310
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        FileInputStream fis = null;
        FileOutputStream fos = null;

        try
        {
            System.out.println("Enter source file:");
            String SourceFile = sobj.nextLine();

            System.out.println("Enter destination file:");
            String DestinationFile = sobj.nextLine();

            fis = new FileInputStream(SourceFile);
            fos = new FileOutputStream(DestinationFile);

            byte Buffer[] = new byte[1024];
            int iRet = 0;

            while((iRet = fis.read(Buffer)) != -1)
            {
                fos.write(Buffer, 0, iRet);
            }

            System.out.println("\nFile copied successfully");
        }
        catch(IOException e)
        {
            System.out.println("Unable to copy file");
        }
        finally
        {
            try
            {
                if(fis != null)
                {
                    fis.close();
                }

                if(fos != null)
                {
                    fos.close();
                }
            }
            catch(IOException e)
            {
                System.out.println("Error while closing file");
            }

            sobj.close();
        }
    }
}