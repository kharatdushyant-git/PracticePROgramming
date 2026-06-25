/*

Q153) Write a program that accepts a string from user and display all
      characters in Alternative.

        Input  : MarVEllouS
        Output : mARveLLOUs

*/

#include<stdio.h>

void DisplayAlternative(char *str)
{
    printf("Updated String is : ");

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;   // Convert uppercase to Uppercase
        }
        else
        {
            *str = *str + 32;
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

    DisplayAlternative(Arr);

    return 0;
}