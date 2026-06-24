/*

Q107) Write a PROgram that print following pattern

     input :- iRow = 4  iCol = 3
     output :- 
                1   2   3
                1   2   3
                1   2   3
*/

#include<stdio.h>

void  Pattern(int iRow, int iCol)
{
    int iCnt1 = 0;
    int iCnt2 = 0;
    
    for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
    {
        for(iCnt2 = 1; iCnt2 <= iCol; iCnt2++)
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