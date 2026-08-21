/*

Q250) Write a Java program to accept directory name from user
and write data of all files along with its name and size of
each file into one newly created file named as
"Marvellous.txt".

*/

import java.io.*;
import java.util.*;

class Program5
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

            FileWriter fw = new FileWriter("Marvellous.txt");

            for(File file : Arr)
            {
                if(file.isFile())
                {
                    fw.write("File Name : " + file.getName() + "\n");
                    fw.write("File Size : " + file.length() + " Bytes\n");
                    fw.write("--------------------------------------\n");

                    BufferedReader br = new BufferedReader(new FileReader(file));

                    String str;

                    while((str = br.readLine()) != null)
                    {
                        fw.write(str);
                        fw.write("\n");
                    }

                    fw.write("\n");

                    br.close();
                }
            }

            fw.close();

            System.out.println("File information written successfully into Marvellous.txt");
        }
        else
        {
            System.out.println("Directory does not exist.");
        }

        sobj.close();
    }
}
