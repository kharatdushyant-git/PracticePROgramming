/*

Q145) write a PROgram that Accept character from user and display its ASCII value in decimal octal hexadecimal format

      input :- A
      output :- Decimal     65
                Octal       0101
                Hexadecimal 0X41
*/

#include<stdio.h>

void DisplayASCII(char ch)
{
    printf("Decimal     : %d\n", ch);
    printf("Octal       : %o\n", ch);
    printf("Hexadecimal : 0X%X\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter Character : ");
    scanf("%c", &cValue);

    DisplayASCII(cValue);

    return 0;
}