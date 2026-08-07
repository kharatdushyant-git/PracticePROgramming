/*

Q248) Write a Java program to accept directory name from user
and write data of all files into one newly created file
named as "Marvellous.txt".

*/

import java.io.*;
import java.util.*;

class PROgram248
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
                    BufferedReader brobj = new BufferedReader(new FileReader(file));

                    String str;

                    while((str = brobj.readLine()) != null)
                    {
                        fwobj.write(str);
                        fwobj.write("\n");
                    }

                    brobj.close();
                }
            }

            fwobj.close();

            System.out.println("Data of all files copied successfully into Marvellous.txt");
        }
        else
        {
            System.out.println("Directory does not exist.");
        }

        sobj.close();
    }
}