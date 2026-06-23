/*

Q140) Accept Charector from user and depend on the Division Display Exam time, there are 4 Division As A,B,C,D. 
      Exam time of Division A at 7 AM, B at 8:30 AM, B at 9:20 AM, D at 10:30 AM  

 */

#include<stdio.h>

void ChkSchedule(char ch)
{
    if(ch == 'A' || ch == 'a')
    {
        printf("Your Exam time is 7:00 AM");
    }

    else if(ch == 'B' || ch == 'b')
    {
        printf("Your Exam time is 8:30 AM");
    }

    else if(ch == 'C' || ch == 'c')
    {
        printf("Your Exam time is 9:20 AM");
    }

    else if(ch == 'D' || ch == 'd')
    {
        printf("Your Exam time is 10:30 AM");
    }

    else
    {
        printf("Invalid Data");
    }

}

int main()
{
    char cValue = '\0';

    printf("Enter the your Division : ");
    scanf("%c",&cValue);

    ChkSchedule(cValue);

    return 0;
}