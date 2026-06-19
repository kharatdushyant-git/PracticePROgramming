/*

Q46) Write a PROgram Which Accept Range from user ans Display number in between that range 

    int :- 23 35
    output :- 23 24 25 26 27 28 29 30 31 32 33 34 35

*/

#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;

    printf("All number in this given Range Are : \n");

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d  ",iCnt);
    }

}

int main()
{
    int iValue1 , iValue2 = 0;

    printf("Enter the First number : ");
    scanf("%d",&iValue1);

    printf("Enter the Second number : ");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
}