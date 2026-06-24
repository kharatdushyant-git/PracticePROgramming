/*

Q103) Write a PROgram that print following pattern

     input :- 5
     output :- 1    *   2   *   3   *   4   *   5   * 

*/

#include<stdio.h>

void  Pattern(int iNo1)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= iNo1; iCnt++)
    {
        
        printf("%d\t",iCnt);
        printf("*\t"); 
    
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