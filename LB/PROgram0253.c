/*

Assignment 48

Question 3:
A university wants to generate student results automatically.

Each student has marks in five subjects, each out of 100.

The result should clearly show whether the student failed in any
subject and, if passed, the final classification based on average marks.

Rules:
- If marks in any subject < 35 -> student is Fail
- If student passes all subjects, calculate average and classify:
    Average > 75 -> Distinction
    Average > 60 -> First Class
    Average > 50 -> Second Class
    Otherwise -> Pass

Input:
Five integers (marks in 5 subjects)

Validation:
Each mark must be between 0 and 100

Expected Output:
If fail:
Result: Fail

Else:
Average Marks: <avg>
Final Result: <classification>

*/

#include<stdio.h>

int main()
{
    int Marks[5];
    int iTotal = 0;
    float fAverage = 0.0f;
    int iFail = 0;

    printf("Enter the 5 Subject Marks : ");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d",&Marks[i]);

        if(Marks[i] < 0 || Marks[i] >100)
        {
            printf("Invalid Output\n");
            return 0;
        }

        if(Marks[i] < 35)
        {
            iFail = 1;
        }

        iTotal += Marks[i];
    }

    if(iFail == 1)
    {
        printf("Result : Fail\n");
    }
    else
    {
        fAverage = iTotal / 5.0;

        printf("Average Marks: %.2f\n",fAverage);

        if(fAverage > 75)
        {
            printf("Final Result: Distinction\n");
        }
        else if(fAverage > 60)
        {
            printf("Final Result: First Class\n");
        }
        else if(fAverage > 50)
        {
            printf("Final Result: Second Class\n");
        }
        else
        {
            printf("Final Result: Pass\n");
        }
    }

    return 0;
}