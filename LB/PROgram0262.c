/*
***********************************************************************
Assignment 50
Assignment Name: Decision Making & Looping

Question 2:

A scholarship committee uses a strict checklist. Only students who meet all
academic and financial conditions qualify.

Conditions:

    Marks ≥ 80%

    Attendance ≥ 75%

    Family income < ₹3,00,000

Input:

    Marks percent (integer)

    Attendance percent (integer)

    Family income (integer)

Validations:

    Marks and attendance must be 0-100

    Income cannot be negative

Expected Output:

    Scholarship Approved

OR

    Scholarship Rejected: <Reason>
***********************************************************************
*/

#include <stdio.h>

int main()
{
    int marks;
    int attendance;
    int income;

    printf("Enter marks percentage: ");
    scanf("%d", &marks);

    printf("Enter attendance percentage: ");
    scanf("%d", &attendance);

    printf("Enter family income: ");
    scanf("%d", &income);

    if (marks < 0 || marks > 100 ||
        attendance < 0 || attendance > 100)
    {
        printf("Invalid Input: Marks and attendance must be 0-100.\n");
    }
    else if (income < 0)
    {
        printf("Invalid Input: Income cannot be negative.\n");
    }
    else if (marks < 80)
    {
        printf("Scholarship Rejected: Marks must be at least 80%%.\n");
    }
    else if (attendance < 75)
    {
        printf("Scholarship Rejected: Attendance must be at least 75%%.\n");
    }
    else if (income >= 300000)
    {
        printf("Scholarship Rejected: Family income must be less than ₹300000.\n");
    }
    else
    {
        printf("Scholarship Approved\n");
    }

    return 0;
}