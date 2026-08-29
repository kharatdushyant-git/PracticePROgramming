/*
    Assignment 1 : Multithreaded Mathematical Client-Server
    Author : ArcaneStage
*/

import java.io.*;
import java.net.*;

class ClientHandler extends Thread
{
    private Socket socket;

    ClientHandler(Socket socket)
    {
        this.socket = socket;
    }

    public void run()
    {
        try
        {
            BufferedReader br = new BufferedReader(new InputStreamReader(socket.getInputStream()));

            PrintWriter pw = new PrintWriter(socket.getOutputStream(), true);

            String strCommand = null;

            while((strCommand = br.readLine()) != null)
            {
                String[] arr = strCommand.split(" ");

                if(arr[0].equalsIgnoreCase("QUIT"))
                {
                    pw.println("Client disconnected");
                    break;
                }

                if(arr.length != 3)
                {
                    pw.println("Invalid command");
                    continue;
                }

                String strOperation = arr[0];

                int iNo1;
                int iNo2;

                try
                {
                    iNo1 = Integer.parseInt(arr[1]);
                    iNo2 = Integer.parseInt(arr[2]);
                }
                catch(NumberFormatException e)
                {
                    pw.println("Invalid numbers");
                    continue;
                }

                int iResult;

                if(strOperation.equalsIgnoreCase("ADD"))
                {
                    iResult = iNo1 + iNo2;
                    pw.println("Result is : " + iResult);
                }
                else if(strOperation.equalsIgnoreCase("SUB"))
                {
                    iResult = iNo1 - iNo2;
                    pw.println("Result is : " + iResult);
                }
                else if(strOperation.equalsIgnoreCase("MULT"))
                {
                    iResult = iNo1 * iNo2;
                    pw.println("Result is : " + iResult);
                }
                else if(strOperation.equalsIgnoreCase("DIV"))
                {
                    if(iNo2 == 0)
                    {
                        pw.println("Division by zero is not allowed");
                    }
                    else
                    {
                        iResult = iNo1 / iNo2;
                        pw.println("Result is : " + iResult);
                    }
                }
                else if(strOperation.equalsIgnoreCase("MOD"))
                {
                    if(iNo2 == 0)
                    {
                        pw.println("Modulo by zero is not allowed");
                    }
                    else
                    {
                        iResult = iNo1 % iNo2;
                        pw.println("Result is : " + iResult);
                    }
                }
                else if(strOperation.equalsIgnoreCase("MAX"))
                {
                    iResult = Math.max(iNo1, iNo2);
                    pw.println("Maximum number is : " + iResult);
                }
                else if(strOperation.equalsIgnoreCase("MIN"))
                {
                    iResult = Math.min(iNo1, iNo2);
                    pw.println("Minimum number is : " + iResult);
                }
                else
                {
                    pw.println("Invalid command");
                }
            }

            socket.close();
        }
        catch(Exception e)
        {
            System.out.println("Client disconnected");
        }
    }
}

public class Server
{
    public static void main(String args[]) throws Exception
    {
        ServerSocket ss = new ServerSocket(2100);

        System.out.println("Server is running...");
        System.out.println("Waiting for clients...");

        while(true)
        {
            Socket socket = ss.accept();

            System.out.println("Client connected");

            ClientHandler obj = new ClientHandler(socket);

            obj.start();
        }
    }
}