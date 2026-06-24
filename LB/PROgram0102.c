/*

Q102) Write a PROgram that print following pattern

     input :- 5
     output :- 5    #   4   #   3   #   2   #   1   # 

*/

#include<stdio.h>

void  Pattern(int iNo1)
{
    int iCnt = 0;
    
    for(iCnt = iNo1; iCnt >= 1; iCnt--)
    {
        
        printf("%d\t",iCnt);
        printf("#\t"); 
    
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