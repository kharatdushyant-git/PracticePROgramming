/*
Assignment 63 - Question 4

Develop a client-server application where the client can check whether a particular file exists on the server machine.

The client should send:

EXISTS <filename>

Example:

Client:
EXISTS Demo.txt

Server:
Demo.txt exists on server

If unavailable:

Client:
EXISTS Test.txt

Server:
Test.txt does not exist

The file checking operation must be performed by the server, not the client.
*/

import java.io.*;
import java.net.*;

class Question4Server
{
    public static void main(String A[])
    {
        try
        {
            ServerSocket ssobj = new ServerSocket(5100);

            System.out.println("Server started...");
            System.out.println("Waiting for client...");

            Socket sobj = ssobj.accept();

            BufferedReader br = new BufferedReader(
                                new InputStreamReader(
                                sobj.getInputStream()));

            PrintWriter pw = new PrintWriter(
                             sobj.getOutputStream(), true);

            String Request = br.readLine();

            if(Request.startsWith("EXISTS "))
            {
                String FileName = Request.substring(7);

                File fobj = new File(FileName);

                if(fobj.exists() && fobj.isFile())
                {
                    pw.println(FileName + " exists on server");
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