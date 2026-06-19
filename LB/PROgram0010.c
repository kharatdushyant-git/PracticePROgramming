/* 

Q10) write a PROgram that accept the number from user and check whether number is even or odd
     with bool

*/
#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

bool CheckEvenOdd(int iNo1)
{
    if(iNo1 % 2 == 0)
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
}
int main()
{
    int iValue1 = 0;

    bool bRet = FALSE;

    printf("Enter the Number : ");
    scanf("%d",&iValue1);

    bRet = CheckEvenOdd(iValue1);

    if(bRet == TRUE)
    {
        printf("The Given number is <<<Even>>>");
    }
    else
    {
        printf("The Given number is <<<Odd>>>");
    }

    return 0;
    
}