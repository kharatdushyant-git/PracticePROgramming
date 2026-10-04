/*
Assignment 57 - Question 2

Write a program to find the longest word in a sentence.

Description:
Identify the word having maximum length.

Input Format:
One sentence

Output Format:
Longest word

Example:

Input:
Marvellous Infosystems Pune

Output:
Infosystems
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    char longest[100];
    char current[100];
    int i = 0;
    int j = 0;
    int iMaxLength = 0;
    int iCurrentLength = 0;

    printf("Enter sentence: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    while(1)
    {
        if(str[i] != ' ' && str[i] != '\0')
        {
            current[j] = str[i];
            j++;
        }
        else
        {
            current[j] = '\0';
            iCurrentLength = strlen(current);

            if(iCurrentLength > iMaxLength)
            {
                iMaxLength = iCurrentLength;
                strcpy(longest, current);
            }

            j = 0;

            if(str[i] == '\0')
            {
                break;
            }
        }

        i++;
    }

    printf("%s\n", longest);

    return 0;
}