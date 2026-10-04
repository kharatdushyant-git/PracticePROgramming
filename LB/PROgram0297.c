/*
Assignment 57 - Question 5

Write a program to check whether one string is rotation of another.

Description:
String B is rotation of String A if it can be obtained by shifting characters.

Input Format:
String1
String2

Output Format:
Rotation
OR
Not Rotation

Example:

Input:
abcd
cdab

Output:
Rotation
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];
    char temp[200];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    if(strlen(str1) == strlen(str2))
    {
        strcpy(temp, str1);
        strcat(temp, str1);

        if(strstr(temp, str2) != NULL)
        {
            printf("Rotation\n");
        }
        else
        {
            printf("Not Rotation\n");
        }
    }
    else
    {
        printf("Not Rotation\n");
    }

    return 0;
}