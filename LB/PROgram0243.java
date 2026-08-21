/*

Q243) Write a Java program to accept a directory name from the
user and create that directory.

*/

import java.io.*;
import java.util.*;

class PROgram0243
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter directory name : ");
        String DirName = sobj.nextLine();

        File fobj = new File(DirName);

        if(fobj.exists())
        {
            System.out.println("Directory already exists.");
        }
        else
        {
            if(fobj.mkdir())
            {
                System.out.println("Directory Created Sucessfully");
            }
            else
            {
                System.out.println("Unable to create Directory ");
            }
        }

        sobj.close();
    }
}
