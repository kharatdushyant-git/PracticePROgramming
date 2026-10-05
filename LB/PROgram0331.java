/*
Assignment 66 - Question 4

Software Dependency Resolver

Dependencies:

Database -> Backend
Backend  -> API
API      -> Frontend

Determine a valid order in which modules should be initialized.

Expected:

Database
Backend
API
Frontend

For complex input:

A -> C
B -> C
C -> D
B -> E
D -> F
E -> F

Find a valid dependency order.
*/

import java.util.*;

class PROgram0331
{
    public static void main(String A[])
    {
        String Modules[] =
        {
            "Database",
            "Backend",
            "API",
            "Frontend"
        };

        String From[] =
        {
            "Database",
            "Backend",
            "API"
        };

        String To[] =
        {
            "Backend",
            "API",
            "Frontend"
        };

        HashMap<String, ArrayList<String>> Graph =
            new HashMap<String, ArrayList<String>>();

        HashMap<String, Integer> Indegree =
            new HashMap<String, Integer>();

        for(int i = 0; i < Modules.length; i++)
        {
            Graph.put(Modules[i], new ArrayList<String>());
            Indegree.put(Modules[i], 0);
        }

        for(int i = 0; i < From.length; i++)
        {
            Graph.get(From[i]).add(To[i]);
            Indegree.put(To[i], Indegree.get(To[i]) + 1);
        }

        Queue<String> qobj = new LinkedList<String>();

        for(String str : Modules)
        {
            if(Indegree.get(str) == 0)
            {
                qobj.add(str);
            }
        }

        while(!qobj.isEmpty())
        {
            String strCurrent = qobj.remove();

            System.out.println(strCurrent);

            for(String strNext : Graph.get(strCurrent))
            {
                Indegree.put(strNext,
                             Indegree.get(strNext) - 1);

                if(Indegree.get(strNext) == 0)
                {
                    qobj.add(strNext);
                }
            }
        }
    }
}