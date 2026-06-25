/*

Q156) Write a program that accepts a string from user and display the Following

        Input  : MarvellouS
        Input :- e
        Output : 1
        
*/

#include<stdio.h>

int CountChar(char *str, char cHar)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == cHar)
        {
            iCnt++;
        }

        str++;
    }

    return iCnt;
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

    iRet = CountChar(Arr, Ch);

    printf("Frequency of Chareceter is : %d",iRet);

    return 0;
}
