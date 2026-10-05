/*
Assignment 66 - Question 5

Social Network Shortest Connection

A social networking application contains friendships:

Amit  -> Rahul, Pooja
Rahul -> Neha
Pooja -> Kiran
Neha  -> Riya
Kiran -> Riya

Find the minimum number of connections required
to reach from:

Amit -> Riya

One possible path:

Amit -> Rahul -> Neha -> Riya

Number of connections:

3
*/

import java.util.*;

class PROgram0332
{
    public static void main(String A[])
    {
        HashMap<String, ArrayList<String>> Graph =
            new HashMap<String, ArrayList<String>>();

        Graph.put("Amit",
                  new ArrayList<String>(
                  Arrays.asList("Rahul", "Pooja")));

        Graph.put("Rahul",
                  new ArrayList<String>(
                  Arrays.asList("Neha")));

        Graph.put("Pooja",
                  new ArrayList<String>(
                  Arrays.asList("Kiran")));

        Graph.put("Neha",
                  new ArrayList<String>(
                  Arrays.asList("Riya")));

        Graph.put("Kiran",
                  new ArrayList<String>(
                  Arrays.asList("Riya")));

        String strSource = "Amit";
        String strDestination = "Riya";

        Queue<String> qobj = new LinkedList<String>();
        HashMap<String, Integer> Distance =
            new HashMap<String, Integer>();

        qobj.add(strSource);
        Distance.put(strSource, 0);

        while(!qobj.isEmpty())
        {
            String strCurrent = qobj.remove();

            if(strCurrent.equals(strDestination))
            {
                System.out.println("Number of connections: " +
                                   Distance.get(strCurrent));
                return;
            }

            for(String strNext : Graph.get(strCurrent))
            {
                if(!Distance.containsKey(strNext))
                {
                    Distance.put(strNext,
                                 Distance.get(strCurrent) + 1);

                    qobj.add(strNext);
                }
            }
        }

        System.out.println("No connection found");
    }
}