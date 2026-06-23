/*

Q144) Accept Charector from user and Check whether Special or not 
     
      input :- #
      output :- TRUE

      input :- D
      output :- FALSE

 */

#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkSpecial(char ch)
{
    if((ch >= 'A' && ch <= 'Z') ||
       (ch >= 'a' && ch <= 'z') ||
       (ch >= '0' && ch <= '9'))
    {
        return FALSE;
    }

    return TRUE;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the Character : ");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("Entered Value is Special Character\n");
    }
    else
    {
        printf("Entered Value is NOT Special Character\n");
    }

    return 0;
}