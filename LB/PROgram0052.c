/*

Q52) Write a PROgram which accpet number and check whether the number conist of 0 or not

    input :- 2025
    output :- it Consist of 0

*/

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

bool CheckZero(int iNo1)
{
    int iDigit = 0;
    for(; iNo1 !=0; )
    {
        iDigit = iNo1 % 10;
       
        if(iDigit == 0)
        {
            return TRUE;
        }

        iNo1 = iNo1 / 10;
    }

    return FALSE;
}

int main()
{
    int iValue1 = 0;
    bool bRet = FALSE;

    printf("Enter the Number : ");
    scanf("%d",&iValue1);

    bRet = CheckZero(iValue1);

    if(bRet == TRUE)
    {
        printf("<<<The Numbrer Consists of Zero>>>");
    }
    else
    {
        printf("<<<The Number has no Zero in it>>>");
    }

    return 0;
}