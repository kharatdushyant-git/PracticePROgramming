/*

Q155) Write a program that accepts a string from user and display the Following

        Input  : Marvellou1S12
        Output : 0 space
        
*/

#include<stdio.h>

void DisplaySpace(char *str)
{
    int iCnt = 0; 
    printf("Space are : ");

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }

        str++;
    }

    printf("%d",iCnt);
}

int main()
{
    char Arr[50];

    printf("Enter string : ");
    scanf("%[^\n]", Arr);

    DisplaySpace(Arr);

    return 0;
}