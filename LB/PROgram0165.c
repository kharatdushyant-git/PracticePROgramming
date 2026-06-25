/*

Q165) Write a program which accept 2 string from user and copy the
      contents of that string into another string.
      (Implement strcat() function)

      Input  : "Marvellous Infosystem"
               "Logic Building"

      Output : "Marvellous Infosystem Logic Building"

*/

#include<stdio.h>

void StrCatX(char *str1, char *str2, char *dest)
{
    while(*str1 != '\0')
    {
        *dest = *str1;
        str1++;
        dest++;
    }

    *dest = ' ';
    dest++;

    while(*str2 != '\0')
    {
        *dest = *str2;
        str2++;
        dest++;
    }

    *dest = '\0';
}

int main()
{
    char arr[30];
    char Arr[30];
    char brr[60];

    printf("Enter First string : ");
    scanf("%[^'\n']s", arr);

    printf("Enter Second string : ");
    scanf(" %[^'\n']s", Arr);

    StrCatX(arr, Arr, brr);

    printf("Copied string is : %s\n", brr);

    return 0;
}