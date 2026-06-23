/*

Q136) Accept Charector from user and Check whether its alphabet or not(A-Z a-z)


      input :- A
      output :- TRUE

      input :- #
      output :- FALSE
 */

#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

bool ChkAlpha(char ch)
{
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') )
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

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("Entered Value is Charector");
    }
    else
    {
        printf("Entered Value is  <<<Not>>> Charector");
    }

    return 0;
}