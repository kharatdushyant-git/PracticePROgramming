/*

Q148) Write a program that accepts a string from user and count difference between frequency Characters

        input  : "MarvellouS"
        output : 6 (8-2)

*/

#include<stdio.h>

int Frequency(char *str)
{
    int iCsum = 0;   // Capital count
    int iSsum = 0;   // Small count

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCsum++;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            iSsum++;
        }

        str++;
    }

    return (iSsum - iCsum);
}

int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^\n]s", Arr);

    iRet = Frequency(Arr);

    printf("Difference is : %d\n", iRet);

    return 0;
}