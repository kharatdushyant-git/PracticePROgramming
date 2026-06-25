/*

Q158) Write a program that accepts a string from user and return
      index of last occurrence of given character.

        Input  : MarvellouSM
        Input  : M
        Output : 10

*/

#include<stdio.h>

int LastChar(char *str, char cHar)
{
    int iCnt = 0;
    int iIndex = -1;

    while(*str != '\0')
    {
        if(*str == cHar)
        {
            iIndex = iCnt;
        }

        iCnt++;
        str++;
    }

    return iIndex;
}

int main()
{
    char Arr[50];
    char Ch = '\0';
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^\n]", Arr);

    printf("Enter Character : ");
    scanf(" %c", &Ch);

    iRet = LastChar(Arr, Ch);

    if(iRet == -1)
    {
        printf("Character not found");
    }
    else
    {
        printf("Last Occurrence of Character is : %d", iRet);
    }

    return 0;
}