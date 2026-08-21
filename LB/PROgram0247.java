/*

Q247) Write a Java program to accept directory name from user
and write names of all files from that directory into one
newly created file named as "Marvellous.txt".

*/

import java.io.*;
import java.util.*;

class PROgram0247
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter directory name : ");
        String DirName = sobj.nextLine();

        File fobj = new File(DirName);

        if(fobj.exists() && fobj.isDirectory())
        {
            File Arr[] = fobj.listFiles();

            FileWriter fwobj = new FileWriter("Marvellous.txt");

            for(File file : Arr)
            {
                if(file.isFile())
                {
                    fwobj.write(file.getName());
                    fwobj.write("\n");
                }
            }

            fwobj.close();

            System.out.println("File names written successfully into Marvellous.txt");
        }
        else
        {
            System.out.println("Directory does not exist.");
        }

        sobj.close();
    }
}
