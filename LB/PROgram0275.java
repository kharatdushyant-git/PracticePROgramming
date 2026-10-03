/*
***********************************************************************
Assignment 53
Question 1:

Design a Java application that analyzes student performance using a
2D matrix.

A college stores marks of students in multiple subjects using a matrix:

    - Rows represent students.
    - Columns represent subjects.

The program must analyze academic performance based on this matrix.

Requirements:

    1. Calculate total marks of each student.
    2. Identify the topper (student with highest total).
    3. Calculate average marks for each subject.
    4. Print students who failed in any subject (marks < 35).

Input Format:

    First line  : Integer N (number of students)
    Second line : Integer M (number of subjects)
    Next N lines: M integers each (marks of each student)

Validations:

    N > 0
    M > 0
    Each mark must be between 0 and 100.

If invalid input is found, print:

    Invalid Input

Output Format:

    Student Totals:
    Student 1: <total>
    Student 2: <total>
    ...

    Topper: Student <index>

    Subject Averages:
    Subject 1: <avg>
    Subject 2: <avg>
    ...

    Students Failed:
    <Student numbers>
***********************************************************************
*/

import java.util.Scanner;

class StudentPerformance
{
    public static void main(String[] args)
    {
        Scanner cInput = new Scanner(System.in);

        int iStudents = 0;
        int iSubjects = 0;
        int iStudent = 0;
        int iSubject = 0;
        int iMarks = 0;
        int iTotal = 0;
        int iTopper = 0;
        int iHighestTotal = 0;
        int iSubjectTotal = 0;

        double dSubjectAverage = 0.0;

        boolean bInvalidInput = false;
        boolean bHasFailed = false;

        int[][] iaMarks = new int[0][0];

        System.out.print("Enter number of students: ");
        iStudents = cInput.nextInt();

        System.out.print("Enter number of subjects: ");
        iSubjects = cInput.nextInt();

        if (iStudents <= 0 || iSubjects <= 0)
        {
            bInvalidInput = true;
        }
        else
        {
            iaMarks = new int[iStudents][iSubjects];

            for (iStudent = 0; iStudent < iStudents; iStudent++)
            {
                for (iSubject = 0; iSubject < iSubjects; iSubject++)
                {
                    System.out.print("Enter marks of Student "
                            + (iStudent + 1) + ", Subject "
                            + (iSubject + 1) + ": ");

                    iMarks = cInput.nextInt();

                    if (iMarks < 0 || iMarks > 100)
                    {
                        bInvalidInput = true;
                        break;
                    }

                    iaMarks[iStudent][iSubject] = iMarks;
                }

                if (bInvalidInput)
                {
                    break;
                }
            }
        }

        if (bInvalidInput)
        {
            System.out.println("Invalid Input");
        }
        else
        {
            System.out.println();
            System.out.println("Student Totals:");

            for (iStudent = 0; iStudent < iStudents; iStudent++)
            {
                iTotal = 0;

                for (iSubject = 0; iSubject < iSubjects; iSubject++)
                {
                    iTotal = iTotal + iaMarks[iStudent][iSubject];
                }

                System.out.println("Student " + (iStudent + 1)
                        + ": " + iTotal);

                if (iStudent == 0 || iTotal > iHighestTotal)
                {
                    iHighestTotal = iTotal;
                    iTopper = iStudent;
                }
            }

            System.out.println();
            System.out.println("Topper: Student " + (iTopper + 1));

            System.out.println();
            System.out.println("Subject Averages:");

            for (iSubject = 0; iSubject < iSubjects; iSubject++)
            {
                iSubjectTotal = 0;

                for (iStudent = 0; iStudent < iStudents; iStudent++)
                {
                    iSubjectTotal =
                            iSubjectTotal + iaMarks[iStudent][iSubject];
                }

                dSubjectAverage =
                        (double)iSubjectTotal / iStudents;

                System.out.printf("Subject %d: %.2f%n",
                        (iSubject + 1), dSubjectAverage);
            }

            System.out.println();
            System.out.println("Students Failed:");

            for(iStudent = 0; iStudent < iStudents; iStudent++)
            {
                bHasFailed = false;

                for (iSubject = 0; iSubject < iSubjects; iSubject++)
                {
                    if (iaMarks[iStudent][iSubject] < 35)
                    {
                        bHasFailed = true;
                        break;
                    }
                }

                if (bHasFailed)
                {
                    System.out.println("Student " + (iStudent + 1));
                }
            }
        }

        cInput.close();
    }
}