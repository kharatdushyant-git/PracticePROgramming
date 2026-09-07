/*

Assignment 42

Question 1:
Write a recursive program which accept string from user and count white space.

Input:
HE llo WOrlD

Output:
3

*/

#include <stdio.h>

int WhiteSpace(char *str)
{
    if(*str == '\0')
    {
        return 0;
    }

    if(*str == ' ')
    {
        return 1 + WhiteSpace(str + 1);
    }

    return WhiteSpace(str + 1);
}

int main()
{
    char arr[100];
    int iRet = 0;

    printf("Enter string: ");
    scanf(" %[^\n]", arr);

    iRet = WhiteSpace(arr);

    printf("%d", iRet);

    return 0;
}