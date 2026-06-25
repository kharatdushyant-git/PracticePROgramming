/*

Q152) Write a program that accepts a string from user and display all
      characters in Uppercase.

        Input  : MarvellouS
        Output : MARVELLOUS

*/

#include<stdio.h>

void DisplayCapital(char *str)
{
    printf("Uppercase String is : ");

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;   // Convert uppercase to Uppercase
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

    DisplayCapital(Arr);

    return 0;
}