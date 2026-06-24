/*

Q101) Write a PROgram that print following pattern

     input :- 5
     output :- A B C D E 

*/

#include<stdio.h>

void  Pattern(int iNo1)
{
    int iCnt = 0;
    char Ch = '\0';
    
    for(iCnt = 1,Ch= 'A'; iCnt <= iNo1; iCnt++,Ch++)
    {
        printf("%c ",Ch);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}