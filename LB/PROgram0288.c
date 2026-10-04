/*
Assignment 56 - Question 1

Write a program to check whether a given string is a Palindrome.

Description:
A string is called a Palindrome if it reads the same forward and backward.

Input Format:
One string str

Output Format:
Print:
Palindrome String
OR
Not Palindrome String

Example:

Input:
madam

Output:
Palindrome String
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int iStart = 0;
    int iEnd = 0;
    int iFlag = 1;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    iEnd = strlen(str) - 1;

    while(iStart < iEnd)
    {
        if(str[iStart] != str[iEnd])
        {
            iFlag = 0;
            break;
        }

        iStart++;
        iEnd--;
    }

    if(iFlag == 1)
    {
        printf("Palindrome String\n");
    }
    else
    {
        printf("Not Palindrome String\n");
    }

    return 0;
}