/*

Q12) write a PROgram that accept one number from user and print factor of that number on screen

    input :- 24
    output :-  1    2   3   4   6   8   12

*/

#include<stdio.h>

void DisplayFactor(int iNo1)
{
    int iCnt = 0;

    if(iNo1 <= 0)
    {
        iNo1 = -iNo1;
    }

    printf("Factor of given number is : ");

    for(iCnt = 1; iCnt <= (iNo1 / 2); iCnt++)
    {
        if(iNo1 % iCnt == 0)  //if want to print even factor add (iCnt % 2 == 0)
        {
            printf("%d",iCnt);
            printf(" ");
        }
    }
} 

int main()
{
    int iValue1 = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue1);

    DisplayFactor(iValue1);

    return 0;

}