/*
Assignment 66 - Question 3

Group Employees Department-Wise

Employee records:

Amit    IT
Rahul   HR
Pooja   IT
Neha    Finance
Kiran   HR
Riya    IT

Expected output:

IT:
Amit
Pooja
Riya

HR:
Rahul
Kiran

Finance:
Neha
*/

import java.util.HashMap;
import java.util.ArrayList;
import java.util.Map;

class PROgram0330
{
    public static void main(String A[])
    {
        String Names[] =
        {
            "Amit",
            "Rahul",
            "Pooja",
            "Neha",
            "Kiran",
            "Riya"
        };

        String Departments[] =
        {
            "IT",
            "HR",
            "IT",
            "Finance",
            "HR",
            "IT"
        };

        HashMap<String, ArrayList<String>> hobj =
            new HashMap<String, ArrayList<String>>();

        for(int i = 0; i < Names.length; i++)
        {
            if(!hobj.containsKey(Departments[i]))
            {
                hobj.put(Departments[i],
                         new ArrayList<String>());
            }

            hobj.get(Departments[i]).add(Names[i]);
        }

        for(Map.Entry<String, ArrayList<String>> entry :
            hobj.entrySet())
        {
            System.out.println(entry.getKey() + ":");

            for(String str : entry.getValue())
            {
                System.out.println(str);
            }

            System.out.println();
        }
    }
}