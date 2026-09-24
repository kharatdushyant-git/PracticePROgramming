/*

Assignment 48

Question 1:
In your college library, students borrow books for exams and assignments.

The librarian wants an automatic fine calculator so that staff don’t
need to calculate fines manually for every student.

As per policy, a student can keep a borrowed book for up to 7 days
without any penalty.

If the book is returned late, the fine depends on how many days
the student kept the book in total.

Fine Rules:
- If the book is returned within 7 days -> No fine
- If total days are 8 to 12 -> Rs.5 per day for each day beyond 7
- If total days are more than 12 ->
    Rs.5 per day for days 8-12
    Rs.10 per day for each day beyond 12

Input:
One integer: total number of days the book was kept (daysKept)

Validation:
If daysKept < 0 -> invalid input

Expected Output:
If daysKept <= 7:
Returned on time. No fine applicable.

Else:
Total fine to be paid: Rs.<fineAmount>

*/

#include<stdio.h>

int main()
{
    int iDaysKept = 0;
    int iFineAmount = 0;

    printf("Total Number of days the book was kept : ");
    scanf("%d",&iDaysKept);

    if(iDaysKept < 0)
    {
        printf("Invalid Data Entered");
    }
    else if(iDaysKept <= 7)
    {
        printf("Book returned in time, No Fine Applicable");
    }
    else if(iDaysKept <= 12)
    {
        iFineAmount = (iDaysKept - 7) * 5;
        
        printf("Total Amount to be Paid : %d rs for %d Days",iFineAmount, iDaysKept);
    }
    else
    {
        //12 Days - 7 Days = 5 Days that why 5 days * 5 rs 
        iFineAmount = (25) + ((iDaysKept - 12) * 10);

        printf("Total Amount to be Paid : %d rs for %d Days",iFineAmount, iDaysKept);
    }

    return 0;
}