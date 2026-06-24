/*

Q108) Write a PROgram that print following pattern

     input :- iRow = 3  iCol = 5
     output :- 
                5   4   3   2   1
                5   4   3   2   1
                5   4   3   2   1
                
*/

#include<stdio.h>

void  Pattern(int iRow, int iCol)
{
    int iCnt1 = 0;
    int iCnt2 = 0;
    
    for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
    {
        for(iCnt2 = iCol; iCnt2 >= 1; iCnt2--)
        {
            printf("%d\t",iCnt2);
        } 

        printf("\n");

    }

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the Number Row : ");
    scanf("%d",&iValue1);

    printf("Enter the Number of Column  : ");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}