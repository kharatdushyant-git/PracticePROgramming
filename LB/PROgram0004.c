/*

Q4) Write PROgram for Accepting one number and check whethe its divisible by 5 or not 

*/

#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

bool Check(int iNo1)
{
    if(iNo1 % 5 == 0)
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

    printf("Enter the Number for Checking : ");
    scanf("%d",&iValue1);

    bRet = Check(iValue1);

    if(bRet == TRUE)
    {
        printf("The Given number is Divisible by 5");
    }
    else
    {
        printf("The Given number is <<<not>>> Divisible by 5");
    }

    return 0;
   
}