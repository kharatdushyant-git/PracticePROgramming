/*

Q142) write a PROgram that accept one charector from user and convert it into capital into smaller
    and vise versa

    input :- a 
    output :- A

    input :- B
    output :- b

*/

#include<stdio.h>
//#include<ctype.h>

void DisplayConvert(char cHar)
{
    printf("Converted Alphabet is : ");


    if((cHar >= 'a') && (cHar <= 'z'))
    {
        printf("%c",cHar - 32);
    }
    else if((cHar >= 'A') && (cHar <= 'Z'))
    {
        printf("%c",cHar + 32);
    }

    /*    
    
    if(islower(cHar))
    {
        printf("%c", toupper(cHar));
    }
    else if(isupper(cHar))
    {
        printf("%c", tolower(cHar));
    }  
        
    */

}

int main()
{
    char cValue1 = '\0';

    printf("Enter the Alphabet you want to Convert : ");
    scanf("%c",&cValue1);

    DisplayConvert(cValue1);

    return 0;

}