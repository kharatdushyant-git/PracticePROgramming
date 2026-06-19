/*

Q50) Write a PROgram Which Accept Range from user ans Display all number in Reversein between that range 

    int :- 23 30
    output :-  30 29 28 27 26 25 24 23

*/

#include<stdio.h>

void ReverseDsiplay(int iStart, int iEnd)
{
    int iCnt = 0;

    printf("Reverse order of Given Range is : ");

    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d  ",iCnt);    
    }

}

int main()
{
    int iValue1 , iValue2 = 0;
    int iRet = 0;

    printf("Enter the First number : ");
    scanf("%d",&iValue1);

    printf("Enter the Second number : ");
    scanf("%d",&iValue2);

    ReverseDsiplay(iValue1, iValue2);

    return 0;
}