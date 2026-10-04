/*
Assignment 56 - Question 3

Write a program to check whether a string is Pangram.

Description:
A string is Pangram if it contains all alphabets from 'a' to 'z' at least once.

Input Format:
One sentence str

Output Format:
Pangram
OR
Not Pangram

Example:

Input:
the quick brown fox jumps over the lazy dog

Output:
Pangram
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[200];
    int iFrequency[26] = {0};
    int i = 0;
    int iFlag = 1;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(isalpha((unsigned char)str[i]))
        {
            iFrequency[tolower((unsigned char)str[i]) - 'a']++;
        }
    }

    for(i = 0; i < 26; i++)
    {
        if(iFrequency[i] == 0)
        {
            iFlag = 0;
            break;
        }
    }

    if(iFlag == 1)
    {
        printf("Pangram\n");
    }
    else
    {
        printf("Not Pangram\n");
    }

    return 0;
}