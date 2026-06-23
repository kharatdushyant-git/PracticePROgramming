/*

Q137) Accept Charector from user and Check whether its Capial alphabet or not 
     
      input :- A
      output :- TRUE

      input :- d
      output :- FALSE

 */

#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

bool ChkCapitalAlpha(char ch)
{
    if((ch >= 'A' && ch <= 'Z'))
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

    bRet = ChkCapitalAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("Entered Value is Capital Alphabet");
    }
    else
    {
        printf("Entered Value is Not a Captial Charector");
    }

    return 0;
}