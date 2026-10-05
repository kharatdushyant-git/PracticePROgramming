/*
Assignment 65 - Question 3

A hospital receives patients with severity levels:

Rahul  2
Amit   5
Pooja  1
Neha   4

Higher severity should be treated first.

Expected order:

Amit
Neha
Rahul
Pooja

Create a Patient class containing:

String name;
int severity;
*/

import java.util.PriorityQueue;

class Patient implements Comparable<Patient>
{
    String name;
    int severity;

    Patient(String str, int iNo)
    {
        name = str;
        severity = iNo;
    }

    public int compareTo(Patient pobj)
    {
        return pobj.severity - this.severity;
    }
}

class PROgram0325
{
    public static void main(String A[])
    {
        PriorityQueue<Patient> pobj =
            new PriorityQueue<Patient>();

        pobj.add(new Patient("Rahul", 2));
        pobj.add(new Patient("Amit", 5));
        pobj.add(new Patient("Pooja", 1));
        pobj.add(new Patient("Neha", 4));

        while(!pobj.isEmpty())
        {
            Patient temp = pobj.remove();

            System.out.println(temp.name);
        }
    }
}