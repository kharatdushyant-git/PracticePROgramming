/*

Q143) Accept Characetor form user. if it Capital then display its all the characters from the input charates till Z. 
      if the input Charater is small then print all the charector till a in other cases retunr directly 

      input :- Q
      output :- Q R S T U V W X Y Z

      input :- m
      output :- m l k j i h g f e d c b a 
*/

#include<stdio.h>

void Display(char cHar)
{
    int iCnt1 = 0;
    int iCnt2 = 0;
    char ch = cHar; 

    if(ch >= 'A' && ch <= 'Z')
    {
        for(iCnt1 = ch; iCnt1 <= 'Z'; iCnt1++)
        {
            printf("%c ",ch);
            ch++;
        }
    }

    else if(ch >= 'a' && ch <= 'b')
    {
        for(iCnt2 = ch; iCnt2 >= 'a'; iCnt2--)
        {
            printf("%c ",ch);
            ch--;
        }
    }

}

int main()
{
    char cValue1 = '\0';

    printf("Enter the Alphabet : ");
    scanf("%c",&cValue1);

    Display(cValue1);

    return 0;

}