/*

Q146) Write a program that accepts a string from user and count number of Capital Characters

        input  : "Marvellous Multi OS"
        output : 4

*/

#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^\n]s", Arr);

    iRet = CountCapital(Arr);

    printf("Number of capital characters are : %d\n", iRet);

    return 0;
}