/*

Q15) write a PROgram that accept one charector from user and check wheer if its vowel

    input :- a 
    output :- a is VOWEL

    input :- B
    output :- b is not a VOWEL

*/

#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

bool DisplayCheckVowel(char cHar)
{
    printf("<<< Checking if Alphabet is vowel or not >>> \n");

    return(cHar == 'a' || cHar == 'A' 
        || cHar == 'e' || cHar == 'E' 
        || cHar == 'i' || cHar == 'I' 
        || cHar == 'o' || cHar == 'O' 
        || cHar == 'u' || cHar == 'U');

    /*   solution 1

    if(cHar == 'a' || cHar == 'e' || cHar == 'i' ||cHar == 'o' ||cHar == 'u')
    {
        return TRUE;
    }

    else if(cHar == 'A' || cHar == 'E' || cHar == 'I' ||cHar == 'O' ||cHar == 'U')
    {
        return TRUE;
    }

    else
    {
        return FALSE;
    }    

    */

    /*    Solution 2

    if(cHar == 'a' || cHar == 'e' || cHar == 'i' ||cHar == 'o' ||cHar == 'u'
       cHar == 'A' || cHar == 'E' || cHar == 'I' ||cHar == 'O' ||cHar == 'U')
    {
        return TRUE;
    }

    else
    {
        return FALSE;
    }    
    
    */



}

int main()
{
    char cValue1 = '\0';

    bool bRet = FALSE;

    printf("Enter the Alphabet you want to Convert : ");
    scanf("%c",&cValue1);

    bRet = DisplayCheckVowel(cValue1);

    if(bRet == TRUE)
    {
        printf("*** Given Aplhabet is <<<VOWEL>>>***");
    }
    else
    {
        printf("*** Given Aplhabet is <<<NOT an VOWEL>>>***");   
    }

    return 0;

}