/*
Assignment 56 - Question 4

Write a program to print duplicate characters from a string.

Description:
Find and display characters that appear more than once.

Input Format:
One string str

Output Format:
Duplicate characters printed in one line.

Example:

Input:
programming

Output:
r g m
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int iFrequency[256] = {0};
    int i = 0;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for(i = 0; str[i] != '\0'; i++)
    {
        iFrequency[(unsigned char)str[i]]++;
    }

    for(i = 0; i < 256; i++)
    {
        if(iFrequency[i] > 1)
        {
            printf("%c ", i);
        }
    }

    printf("\n");

    return 0;
}