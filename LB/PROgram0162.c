/*

Q162) Write a program which accept string from user and copy the contents of that string into another string.
      (Implement strncpy() function)

      Input  : "Marvellous Multi OS"
                10
      Output : "Marvellous"

*/

#include<stdio.h>

void StrNCpyX(char *str, char *dest, int iCnt)
{
    while((*str != '\0') && (iCnt != 0))
    {
        *dest = *str;
        str++;
        dest++;
        iCnt--;
    }

    *dest = '\0';
}

int main()
{
    char arr[30];
    char brr[30];
    int iValue = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    printf("Enter number of characters : ");
    scanf("%d", &iValue);

    StrNCpyX(arr, brr, iValue);

    printf("Copied string is : %s\n", brr);

    return 0;
}