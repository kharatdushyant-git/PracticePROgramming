import java.io.*;
import java.net.*;

public class Server
{
    public static void main(String args[]) throws Exception
    {
        ServerSocket ss = new ServerSocket(2100);

        System.out.println("Server is running...");
        System.out.println("Waiting for client...");

        Socket socket = ss.accept();

        System.out.println("Client connected");

        BufferedReader br = new BufferedReader(
            new InputStreamReader(socket.getInputStream()));

        PrintWriter pw = new PrintWriter(
            socket.getOutputStream(), true);

        String strCommand;

        while((strCommand = br.readLine()) != null)
        {
            String[] arr = strCommand.split(" ", 2);

            if(arr.length != 2)
            {
                pw.println("Invalid command");
                continue;
            }

            String strOperation = arr[0];
            String str = arr[1];

            if(strOperation.equalsIgnoreCase("LENGTH"))
            {
                pw.println("Length is : " + str.length());
            }
            else if(strOperation.equalsIgnoreCase("UPPER"))
            {
                pw.println(str.toUpperCase());
            }
            else if(strOperation.equalsIgnoreCase("LOWER"))
            {
                pw.println(str.toLowerCase());
            }
            else if(strOperation.equalsIgnoreCase("REVERSE"))
            {
                String strReverse = "";

                for(int i = str.length() - 1; i >= 0; i--)
                {
                    strReverse = strReverse + str.charAt(i);
                }

                pw.println(strReverse);
            }
            else if(strOperation.equalsIgnoreCase("PALINDROME"))
            {
                String strReverse = "";

                for(int i = str.length() - 1; i >= 0; i--)
                {
                    strReverse = strReverse + str.charAt(i);
                }

                if(str.equalsIgnoreCase(strReverse))
                {
                    pw.println(str + " is a Palindrome");
                }
                else
                {
                    pw.println(str + " is not a Palindrome");
                }
            }
            else if(strOperation.equalsIgnoreCase("VOWELS"))
            {
                int iCount = 0;

                for(int i = 0; i < str.length(); i++)
                {
                    char ch = Character.toLowerCase(str.charAt(i));

                    if(ch == 'a' || ch == 'e' || ch == 'i' ||
                       ch == 'o' || ch == 'u')
                    {
                        iCount++;
                    }
                }

                pw.println("Number of vowels : " + iCount);
            }
            else
            {
                pw.println("Invalid command");
            }
        }

        socket.close();
        ss.close();
    }
}