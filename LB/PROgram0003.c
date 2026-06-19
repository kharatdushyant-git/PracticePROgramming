/*

Q3) Write PROgram to print 5 to 1 on Screen

*/

#include<stdio.h>

void Display(int iNo1)
{
    int iCnt = 0;

    for(iCnt = iNo1; iCnt >= 1; iCnt--)
    {
        printf("Number is : %d",iCnt);
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0;

    printf("Enter number of Elements of Iteration for reverse Display of number : ");
    scanf("%d",&iValue1);

    Display(iValue1);

    return 0;

}