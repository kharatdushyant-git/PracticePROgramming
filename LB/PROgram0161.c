/*

Q161) Write a program which accept string from user and copy the
      contents of that string into another string.
      (Implement strcpy() function)

      Input  : "Marvellous Multi OS"
    
      Output : "Marvellous Multi OS"

*/

#include<stdio.h>

void StrCpyX(char *str, char *dest)
{
    while(*str != '\0')
    {
        *dest = *str;
        str++;
        dest++;
    }

    *dest = '\0';
}

int main()
{
    char arr[30];
    char brr[30];

    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    StrCpyX(arr, brr);

    printf("Copied string is : %s\n", brr);

    return 0;
}