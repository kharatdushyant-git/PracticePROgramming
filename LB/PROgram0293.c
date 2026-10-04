/*
Assignment 57 - Question 1

Write a program to reverse each word of a sentence.

Description:
Reverse individual words but keep word order same.

Input Format:
One sentence

Output Format:
Sentence with reversed words

Example:

Input:
Java is powerful

Output:
avaJ si lufrewop
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int i = 0;
    int iStart = 0;
    int iEnd = 0;
    char ch;

    printf("Enter sentence: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    while(1)
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            iEnd = i - 1;

            while(iStart < iEnd)
            {
                ch = str[iStart];
                str[iStart] = str[iEnd];
                str[iEnd] = ch;

                iStart++;
                iEnd--;
            }

            if(str[i] == '\0')
            {
                break;
            }

            iStart = i + 1;
        }

        i++;
    }

    printf("%s\n", str);

    return 0;
}