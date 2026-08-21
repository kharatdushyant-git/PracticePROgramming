/*

Q5) Write a Java program to accept two file names from the user.
Open the first file in read mode and append its contents
to the second file.

*/

import java.io.*;
import java.util.*;

class PROgram0240
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter source file name : ");
        String Source = sobj.nextLine();

        System.out.print("Enter destination file name : ");
        String Destination = sobj.nextLine();

        File fsrcobj = new File(Source);
        File fdestobj = new File(Destination);

        if(fsrcobj.exists())
        {
            BufferedReader bobj = new BufferedReader(new FileReader(fsrcobj));
            FileWriter fwobj = new FileWriter(fdestobj,true);

            String str;

            while((str = bobj.readLine()) != null)
            {
                System.out.println(" ");

                fwobj.write(str);
                fwobj.write("\n");
            }

            bobj.close();
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
