/*
Assignment 57 - Question 4

Write a program to count vowels and consonants in a string.

Description:
Count total vowels (a,e,i,o,u) and consonants separately.

Input Format:
One string

Output Format:
Vowels: <count>
Consonants: <count>

Example:

Input:
education

Output:

Vowels: 5
Consonants: 4
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int iVowels = 0;
    int iConsonants = 0;
    int i = 0;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(isalpha((unsigned char)str[i]))
        {
            if(str[i] == 'a' || str[i] == 'e' ||
               str[i] == 'i' || str[i] == 'o' ||
               str[i] == 'u' ||
               str[i] == 'A' || str[i] == 'E' ||
               str[i] == 'I' || str[i] == 'O' ||
               str[i] == 'U')
            {
                iVowels++;
            }
            else
            {
                iConsonants++;
            }
        }
    }

    printf("Vowels: %d\n", iVowels);
    printf("Consonants: %d\n", iConsonants);

    return 0;
}