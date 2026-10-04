/*
Assignment 56 - Question 5

Write a program to count frequency of each character.

Description:
Display each character along with its count.

Input Format:
One string str

Output Format:
Character -> Count

Example:

Input:
hello

Output:
h -> 1
e -> 1
l -> 2
o -> 1
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int iFrequency[256] = {0};
    int iPrinted[256] = {0};
    int i = 0;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for(i = 0; str[i] != '\0'; i++)
    {
        iFrequency[(unsigned char)str[i]]++;
    }

    for(i = 0; str[i] != '\0'; i++)
    {
        if(iPrinted[(unsigned char)str[i]] == 0)
        {
            printf("%c -> %d\n", str[i],
                   iFrequency[(unsigned char)str[i]]);

            iPrinted[(unsigned char)str[i]] = 1;
        }
    }

    return 0;
}