/*
Assignment 62 - Question 2

Write a Java application that accepts a filename from the user and displays the complete contents of that file.

Example:

Assume Demo.txt contains:

Marvellous Infosystems
Logic Building Batch
Pune

Output:

Enter file name:
Demo.txt

File contents:

Marvellous Infosystems
Logic Building Batch
Pune

Requirements:
Use FileInputStream.
Display an appropriate error message if the specified file does not exist.
*/

import java.io.FileInputStream;
import java.io.IOException;
import java.util.Scanner;

class PROgram0309
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        FileInputStream fis = null;

        try
        {
            System.out.println("Enter file name:");
            String FileName = sobj.nextLine();

            fis = new FileInputStream(FileName);

            System.out.println("\nFile contents:\n");

            int iRet = 0;

            while((iRet = fis.read()) != -1)
            {
                System.out.print((char)iRet);
            }

            System.out.println();
        }
        catch(IOException e)
        {
            System.out.println("File does not exist");
        }
        finally
        {
            try
            {
                if(fis != null)
                {
                    fis.close();
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