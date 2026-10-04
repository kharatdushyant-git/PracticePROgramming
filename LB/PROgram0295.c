/*
Assignment 57 - Question 3

Write a program to remove duplicate characters from a string.

Description:
Remove repeated characters while keeping first occurrence.

Input Format:
One string

Output Format:
String without duplicate characters

Example:

Input:
banana

Output:
ban
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char result[100];
    int iFrequency[256] = {0};
    int i = 0;
    int j = 0;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for(i = 0; str[i] != '\0'; i++)
    {
        if(iFrequency[(unsigned char)str[i]] == 0)
        {
            result[j] = str[i];
            j++;

            iFrequency[(unsigned char)str[i]] = 1;
        }
    }

    result[j] = '\0';

    printf("%s\n", result);

    return 0;
}