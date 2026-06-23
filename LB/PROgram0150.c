/*

Q150) Write a program that accepts a string from user ans display it in reverse order

        input  : "MarvellouS"
        output : "SuollevraM"

*/

#include<stdio.h>

void Reverse(char *str)
{
    char *start = str;

    printf("Reverse String is : ");

    while(*str != '\0')
    {
        str++;
    }

    str--;   // Move to last character

    while(str >= start)
    {
        printf("%c", *str);
        str--;
    }
}

int main()
{
    char Arr[50];

    printf("Enter string : ");
    scanf("%[^\n]s", Arr);

    Reverse(Arr);

    return 0;
}