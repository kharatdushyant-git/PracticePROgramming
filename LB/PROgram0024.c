/*

Q24) Write a PROgram which one number from usser and print odd number till that number 

    input :- 18
    output :- 1 3 5 7 9 11 13

*/

#include<stdio.h>

void Display(int iNo1)
{
    int iCnt = 0;

    /*

    for(iCnt = 1; iCnt <= iNo1; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf( "%d",iCnt);
            printf(" ");
        }
    }

    */

    for(iCnt = 1; iCnt <= iNo1; iCnt = iCnt + 2)
    {
        printf("%d ", iCnt);
    }
}

int main()
{
    int iValue1 = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue1);

    Display(iValue1);

    return 0;
}