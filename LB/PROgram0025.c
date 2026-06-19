/*

Q25) Write a PROgram which Accept number n and print 5 Multiple of n

    input :- 4
    output :- 4 8 12 16 20

*/

#include<stdio.h>

void Display(int iNo1)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 10; iCnt++)              // i took 10 instead of 5    
    {
        printf("%d ",iNo1 * iCnt);
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