/*

Q164) Write a program which accept string from user and copy the contents of that string into another string.
      (Implement strncpy() function)

      Input  : "Marvellous Multi OS"
               
      Output : "MMOS"

*/

#include<stdio.h>

void StrNCpyX(char *str, char *dest)
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

    StrNCpyX(arr, brr);

    printf("Copied string is : %s\n", brr);

    return 0;
}