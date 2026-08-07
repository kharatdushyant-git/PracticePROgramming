/*

Q244) Write a Java program to accept a file name from the user
and calculate the checksum of that file.

*/

import java.io.*;
import java.util.*;
import java.util.zip.CRC32;
import java.util.zip.CheckedInputStream;

class PRogram0244
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name : ");
        String FileName = sobj.nextLine();

        File fobj = new File(FileName);

        if(fobj.exists())
        {
            CheckedInputStream cis = new CheckedInputStream(new FileInputStream(fobj), new CRC32());

            while(cis.read() != -1)
            {
            }

            long Checksum = cis.getChecksum().getValue();

            System.out.println("Checksum (Decimal) : " + Checksum);
            System.out.println("Checksum (Hexadecimal) : " + Long.toHexString(Checksum).toUpperCase());

            cis.close();
        }
        else
        {
            System.out.println("File does not exist.");
        }

        sobj.close();
    }
}