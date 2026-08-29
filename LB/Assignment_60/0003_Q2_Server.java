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
            BufferedReader br = new BufferedReader(
                new InputStreamReader(socket.getInputStream()));

            PrintWriter pw = new PrintWriter(
                socket.getOutputStream(), true);

            String strCommand;

            while((strCommand = br.readLine()) != null)
            {
                String[] arr = strCommand.split(" ");

                if(arr.length != 2)
                {
                    pw.println("Invalid command");
                    continue;
                }

                String strOperation = arr[0];

                int iNo;

                try
                {
                    iNo = Integer.parseInt(arr[1]);
                }
                catch(NumberFormatException e)
                {
                    pw.println("Invalid number");
                    continue;
                }

                if(strOperation.equalsIgnoreCase("EVEN"))
                {
                    if(CheckEven(iNo))
                    {
                        pw.println(iNo + " is an Even Number");
                    }
                    else
                    {
                        pw.println(iNo + " is not an Even Number");
                    }
                }
                else if(strOperation.equalsIgnoreCase("ODD"))
                {
                    if(CheckOdd(iNo))
                    {
                        pw.println(iNo + " is an Odd Number");
                    }
                    else
                    {
                        pw.println(iNo + " is not an Odd Number");
                    }
                }
                else if(strOperation.equalsIgnoreCase("PRIME"))
                {
                    if(CheckPrime(iNo))
                    {
                        pw.println(iNo + " is a Prime Number");
                    }
                    else
                    {
                        pw.println(iNo + " is not a Prime Number");
                    }
                }
                else if(strOperation.equalsIgnoreCase("PERFECT"))
                {
                    if(CheckPerfect(iNo))
                    {
                        pw.println(iNo + " is a Perfect Number");
                    }
                    else
                    {
                        pw.println(iNo + " is not a Perfect Number");
                    }
                }
                else if(strOperation.equalsIgnoreCase("FACTORIAL"))
                {
                    long lResult = Factorial(iNo);

                    pw.println("Factorial is : " + lResult);
                }
                else if(strOperation.equalsIgnoreCase("REVERSE"))
                {
                    int iResult = Reverse(iNo);

                    pw.println("Reverse is : " + iResult);
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

    static boolean CheckEven(int iNo)
    {
        return (iNo % 2 == 0);
    }

    static boolean CheckOdd(int iNo)
    {
        return (iNo % 2 != 0);
    }

    static boolean CheckPrime(int iNo)
    {
        if(iNo <= 1)
        {
            return false;
        }

        for(int i = 2; i <= iNo / 2; i++)
        {
            if(iNo % i == 0)
            {
                return false;
            }
        }

        return true;
    }

    static boolean CheckPerfect(int iNo)
    {
        if(iNo <= 0)
        {
            return false;
        }

        int iSum = 0;

        for(int i = 1; i <= iNo / 2; i++)
        {
            if(iNo % i == 0)
            {
                iSum = iSum + i;
            }
        }

        return (iSum == iNo);
    }

    static long Factorial(int iNo)
    {
        long lFact = 1;

        for(int i = 1; i <= iNo; i++)
        {
            lFact = lFact * i;
        }

        return lFact;
    }

    static int Reverse(int iNo)
    {
        int iRev = 0;

        while(iNo != 0)
        {
            int iDigit = iNo % 10;

            iRev = (iRev * 10) + iDigit;

            iNo = iNo / 10;
        }

        return iRev;
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