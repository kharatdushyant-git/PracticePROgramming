import java.io.*;
import java.net.*;

public class Client
{
    public static void main(String args[]) throws Exception
    {
        Socket socket = new Socket("localhost", 2100);

        BufferedReader br = new BufferedReader(
            new InputStreamReader(socket.getInputStream()));

        PrintWriter pw = new PrintWriter(
            socket.getOutputStream(), true);

        BufferedReader console = new BufferedReader(
            new InputStreamReader(System.in));

        String strCommand;
        String strResult;

        while(true)
        {
            System.out.print("Enter command : ");

            strCommand = console.readLine();

            pw.println(strCommand);

            strResult = br.readLine();

            System.out.println("Server : " + strResult);

            if(strCommand.equalsIgnoreCase("QUIT"))
            {
                break;
            }
        }

        socket.close();
    }
}