/*

Q138) Accept Charector from user and Check whether its digit  or not 
     
      input :- 7
      output :- TRUE

      input :- d
      output :- FALSE

 */

#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

bool ChkDigit(char ch)
{
    if((ch >= '0' && ch <= '9'))
    {
        return TRUE;
    }

    return FALSE;
}

int main()
{
    char cValue = '\0';
    bool bRet = FALSE;

    printf("Enter the Charector : ");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("Entered Value i Digit");
    }
    else
    {
        printf("Entered Value is Not a Digit");
    }

    return 0;
}