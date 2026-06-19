/*

Q17) write a PROgram that accept one number from user and print its factor in decreasing order

    input :- 12
    output :- 6 4 3 2 1 

*/

#include<stdio.h>

void DisplayFactor(int iNo1)
{
    int iCnt = 0;

    for(iCnt = (iNo1/2); iCnt >= 1; iCnt--)
    {
        if(iNo1 % iCnt == 0)
        {
            printf("%d ",iCnt);
        }
    }

}

int main()
{
    int iValue1 = 0;

    printf("Enter number for konwing factor in <<<Decreasing Order>>> : ");
    scanf("%d",&iValue1);

    DisplayFactor(iValue1);

    return 0;
}