/*

Q104) Write a PROgram that print following pattern

     input :- 8
     output :- 2   4   6   8   10  12  14  16

*/

#include<stdio.h>

void  Pattern(int iNo1)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= (iNo1 * 2); iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
        } 
    
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