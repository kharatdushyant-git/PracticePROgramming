/*

Q156) Write a program that accepts a string from user and display the Following

        Input  : MarvellouS
        Input :- e
        Output : TRUE
        
*/

#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkChar(char *str, char cHar)
{
    while(*str != '\0')
    {
        if(*str == cHar)
        {
            return TRUE;
        }

        str++;
    }

    return FALSE;
}

int main()
{
    char Arr[50];
    char Ch = '\0';
    BOOL bRet = FALSE;

    printf("Enter string : ");
    scanf("%[^\n]", Arr);

    printf("Enter Character : ");
    scanf(" %c", &Ch);

    bRet = ChkChar(Arr, Ch);

    if(bRet == TRUE)
    {
        printf("Given Character is Present in String\n");
    }
    else
    {
        printf("Given Character is NOT Present in String\n");
    }

    return 0;
}