/*

Q238) Write a Java program to accept a file name from the user,
open that file in write mode and write some data at the end
of the file.

*/

import java.io.*;
import java.util.*;

class PROgram0238
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name : ");
        String FileName = sobj.nextLine();

        File fobj = new File(FileName);

        if(fobj.exists())
        {
            FileWriter fwobj = new FileWriter(fobj);

            System.out.println("Enter Data to appned in the given file : ");

            String Data = sobj.nextLine();

            fwobj.write(Data);
            fwobj.write("\n");

            fwobj.close();

            System.out.println("Data Inserted Sucessfully");

        }

        else
        {
            System.out.println("File does not exist.");
        }

        sobj.close();
    }
}