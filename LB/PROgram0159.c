/*

Q159) Write a program that accepts a string from user and return
      index of first occurrence of given character.

        Input  : MarvellouS
        Input  : e
        Output : 4  (Index)

*/

#include<stdio.h>

int FirstChar(char *str, char cHar)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == cHar)
        {
            return iCnt;
        }

        iCnt++;
        str++;
    }

    return -1;
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

    iRet = FirstChar(Arr, Ch);

    if(iRet == -1)
    {
        printf("Character not found");
    }
    else
    {
        printf("First Occurrence of Character is : %d", iRet);
    }

    return 0;
}