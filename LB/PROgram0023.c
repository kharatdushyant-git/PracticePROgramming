/*

Q23) Write a PROgram which Accept number from user and print its number line

    input :- 4
    output :- -4  -3  -2  -1   0   1   2   3   4

*/

#include<stdio.h>

void Display(int iNo1)
{
    int iCnt = 0;

    for(iCnt = -iNo1; iCnt <= iNo1; iCnt++)
    {
        printf("%d ",iCnt);
        
    }

    printf("\n");

    for(iCnt = iNo1; iCnt >= -iNo1; iCnt--)
    {
        printf("%d ",iCnt);

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