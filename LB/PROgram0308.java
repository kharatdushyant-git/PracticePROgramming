/*
Assignment 62 - Question 1

Write a Java program that accepts a filename and textual data from the user and stores that data inside the specified file.

Example:

Enter file name:
Demo.txt

Enter data:
Marvellous Infosystems Pune

Data written successfully

Requirements:
Use FileOutputStream.
Do not use higher-level utility functions for writing the complete file.
*/

import java.io.FileOutputStream;
import java.io.IOException;
import java.util.Scanner;

class PROgram0308
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        FileOutputStream fos = null;

        try
        {
            System.out.println("Enter file name:");
            String FileName = sobj.nextLine();

            System.out.println("Enter data:");
            String Data = sobj.nextLine();

            fos = new FileOutputStream(FileName);

            byte Arr[] = Data.getBytes();

            fos.write(Arr);

            System.out.println("Data written successfully");
        }
        catch(IOException e)
        {
            System.out.println("Unable to write data into file");
        }
        finally
        {
            try
            {
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