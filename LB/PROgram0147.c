/*

Q147) Write a program that accepts a string from user and count number of Small Characters

        input  : "Marvellous"
        output : 9

*/

#include<stdio.h>

int SmallCapital(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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

    iRet = SmallCapital(Arr);

    printf("Number of capital characters are : %d\n", iRet);

    return 0;
}