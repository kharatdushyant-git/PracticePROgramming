/*
Assignment 64 - Question 5

Student data is:

Amit  78
Pooja 92
Rahul 85
Neha  92
Kiran 67

Create a Student class and display students according to descending marks.

If two students have equal marks, sort them alphabetically.

Expected output:

Neha  92
Pooja  92
Rahul 85
Amit  78
Kiran 67
*/

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

class Student
{
    String Name;
    int Marks;

    Student(String str, int iNo)
    {
        Name = str;
        Marks = iNo;
    }
}

class PROgram0322
{
    public static void main(String A[])
    {
        ArrayList<Student> sobj = new ArrayList<Student>();

        sobj.add(new Student("Amit", 78));
        sobj.add(new Student("Pooja", 92));
        sobj.add(new Student("Rahul", 85));
        sobj.add(new Student("Neha", 92));
        sobj.add(new Student("Kiran", 67));

        Collections.sort(sobj, new Comparator<Student>()
        {
            public int compare(Student s1, Student s2)
            {
                if(s1.Marks != s2.Marks)
                {
                    return s2.Marks - s1.Marks;
                }

                return s1.Name.compareTo(s2.Name);
            }
        });

        for(int i = 0; i < sobj.size(); i++)
        {
            System.out.println(sobj.get(i).Name + " " +
                               sobj.get(i).Marks);
        }
    }
}