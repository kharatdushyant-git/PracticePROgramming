/*
Assignment 56 - Question 2

Write a program to check whether two strings are Anagrams.

Description:
Two strings are Anagrams if they contain the same characters with the same frequency, regardless of order.

Input Format:
First string str1
Second string str2

Output Format:
Anagram
OR
Not Anagram

Example:

Input:
listen
silent

Output:
Anagram
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];
    int iCount1[256] = {0};
    int iCount2[256] = {0};
    int iFlag = 1;
    int i = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    if(strlen(str1) != strlen(str2))
    {
        iFlag = 0;
    }
    else
    {
        for(i = 0; str1[i] != '\0'; i++)
        {
            iCount1[(unsigned char)str1[i]]++;
            iCount2[(unsigned char)str2[i]]++;
        }

        for(i = 0; i < 256; i++)
        {
            if(iCount1[i] != iCount2[i])
            {
                iFlag = 0;
                break;
            }
        }
    }

    if(iFlag == 1)
    {
        printf("Anagram\n");
    }
    else
    {
        printf("Not Anagram\n");
    }

    return 0;
}