/*
Assignment 63 - Question 5

Develop a client-server application where the client can request information about a file stored on the server.

Command:

INFO <filename>

Example:

Client:
INFO Demo.txt

Server:

File Name     : Demo.txt
Size          : 2450 bytes
Readable      : true
Writable      : true
Absolute Path : /ServerData/Demo.txt

Handle nonexistent files appropriately.
*/

import java.io.*;
import java.net.*;

class Question5Server
{
    public static void main(String A[])
    {
        try
        {
            ServerSocket ssobj = new ServerSocket(5200);

            System.out.println("Server started...");
            System.out.println("Waiting for client...");

            Socket sobj = ssobj.accept();

            BufferedReader br = new BufferedReader(
                                new InputStreamReader(
                                sobj.getInputStream()));

            PrintWriter pw = new PrintWriter(
                             sobj.getOutputStream(), true);

            String Request = br.readLine();

            if(Request.startsWith("INFO "))
            {
                String FileName = Request.substring(5);

                File fobj = new File(FileName);

                if(fobj.exists() && fobj.isFile())
                {
                    pw.println("File Name     : " + fobj.getName());
                    pw.println("Size          : " + fobj.length() + " bytes");
                    pw.println("Readable      : " + fobj.canRead());
                    pw.println("Writable      : " + fobj.canWrite());
                    pw.println("Absolute Path : " + fobj.getAbsolutePath());
                }
                else
                {
                    pw.println(FileName + " does not exist");
                }
            }

            sobj.close();
            ssobj.close();
        }
        catch(IOException e)
        {
            System.out.println("Server error");
        }
    }
}