/*

Q12) write a PROgram that accept one number from user and print even factor of that number on screen

    input :- 36
    output :-  2    6   12   18

*/

#include<stdio.h>

void DisplayEvenFactor(int iNo1)
{
    int iCnt = 0;

    if(iNo1 < 0)
    {
        iNo1 = -iNo1;
    }

    printf("Even factor of given number are : ");

    for(iCnt = 1; iCnt <= (iNo1 / 2); iCnt++)
    {
        if((iNo1 % iCnt == 0) && (iCnt % 2 == 0))
        {
            printf("%d ",iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0;

    printf("Enter the number to know even factor : ");
    scanf("%d",& iValue1);

    DisplayEvenFactor(iValue1);

    return 0;

}

