/*

Q151) Write a program that accepts a string from user and display all
      characters in lowercase.

        Input  : MarvellouS
        Output : marvellous

*/

#include<stdio.h>

void DisplaySmall(char *str)
{
    printf("Lowercase String is : ");

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;   // Convert uppercase to lowercase
        }

        printf("%c", *str);
        str++;
    }
}

int main()
{
    char Arr[50];

    printf("Enter string : ");
    scanf("%[^\n]", Arr);

    DisplaySmall(Arr);

    return 0;
}