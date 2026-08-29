import java.io.*;
import java.net.*;
import java.time.*;
import java.time.format.*;

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
                if(strCommand.equalsIgnoreCase("DATE"))
                {
                    LocalDate date = LocalDate.now();

                    DateTimeFormatter formatter =
                        DateTimeFormatter.ofPattern("dd-MM-yyyy");

                    pw.println(date.format(formatter));
                }
                else if(strCommand.equalsIgnoreCase("TIME"))
                {
                    LocalTime time = LocalTime.now();

                    DateTimeFormatter formatter =
                        DateTimeFormatter.ofPattern("HH:mm:ss");

                    pw.println(time.format(formatter));
                }
                else if(strCommand.equalsIgnoreCase("SERVERNAME"))
                {
                    String strServerName =
                        InetAddress.getLocalHost().getHostName();

                    pw.println(strServerName);
                }
                else if(strCommand.equalsIgnoreCase("HELP"))
                {
                    pw.println(
                        "Available Commands:\n" +
                        "DATE\n" +
                        "TIME\n" +
                        "SERVERNAME\n" +
                        "HELP\n" +
                        "QUIT"
                    );
                }
                else if(strCommand.equalsIgnoreCase("QUIT"))
                {
                    pw.println("Client disconnected");
                    break;
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