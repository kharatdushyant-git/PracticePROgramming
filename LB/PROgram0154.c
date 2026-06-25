/*

Q154) Write a program that accepts a string from user and display all
      digits from the string.

        Input  : Marvellou1S12
        Output : 112
        
*/

#include<stdio.h>

void DisplayDigit(char *str)
{
    printf("Digits are : ");

    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c", *str);
        }

        str++;
    }
}

int main()
{
    char Arr[50];

    printf("Enter string : ");
    scanf("%[^\n]", Arr);

    DisplayDigit(Arr);

    return 0;
}