/*

Q237) Write a Java program to accept a file name from the user,
open that file and display the contents on the screen.

*/

import java.io.*;
import java.util.*;

class PROgram0237
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name : ");
        String FileName = sobj.nextLine();

        File fobj = new File(FileName);

        if(fobj.exists())
        {
            FileReader frobj = new FileReader(fobj);
            BufferedReader bobj = new BufferedReader(frobj);

            String str;

            while((str = bobj.readLine()) != null)
            {
                System.out.println(str);
            }
            
            bobj.close();
            frobj.close(); 

        }

        else
        {
            System.out.println("File does not exist.");
        }

        sobj.close();
    }
}