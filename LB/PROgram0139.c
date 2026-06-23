/*

Q139) Accept Charector from user and Check whether its Small Case  or not 
     
      input :- d
      output :- TRUE

      input :- D
      output :- FALSE

 */

#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

bool ChkSmallAlpha(char ch)
{
    if((ch >= 'a' && ch <= 'z'))
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

    bRet = ChkSmallAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("Entered Value is Small Alphabet");
    }
    else
    {
        printf("Entered Value is <<<Not>>> Small Alphabet");
    }

    return 0;
}