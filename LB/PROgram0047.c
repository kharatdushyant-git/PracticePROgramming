/*

Q47) Write a PROgram Which Accept Range from user ans Display even number in between that range 

    int :- 23 35
    output :-  24  26  28  30  32  34 

*/

#include<stdio.h>

void RangeEvenDisplay(int iStart, int iEnd)
{
    int iCnt = 0;

    printf("All Even Number in this given Range Are : \n");

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d  ",iCnt);
        }    
    }

}

int main()
{
    int iValue1 , iValue2 = 0;

    printf("Enter the First number : ");
    scanf("%d",&iValue1);

    printf("Enter the Second number : ");
    scanf("%d",&iValue2);

    RangeEvenDisplay(iValue1, iValue2);

    return 0;
}