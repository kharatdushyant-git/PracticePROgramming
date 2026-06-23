/*

Q149) Write a program that accepts a string from and check whether its has vowel or not

        input  : "MarvellouS"
        output : TRUE

*/

#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

bool ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'A' || *str == 'a' ||
           *str == 'E' || *str == 'e' ||
           *str == 'I' || *str == 'i' ||
           *str == 'O' || *str == 'o' ||
           *str == 'U' || *str == 'u')
        {
            return TRUE;
        }

        str++;
    }

    return FALSE;
}

int main()
{
    char Arr[50];
    bool bRet = FALSE;

    printf("Enter string : ");
    scanf("%[^\n]s", Arr);

    bRet = ChkVowel(Arr);

    if(bRet == TRUE)
    {
        printf("String contains vowel\n");
    }
    else
    {
        printf("String does not contain vowel\n");
    }

    return 0;
}