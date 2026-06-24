/*

Q121) Write a PROgram that print following pattern

     input :- iRow = 4  iCol = 4
     output :-
                *   #   #   #
                *   *   #   #
                *   *   *   #
                *   *   *   *
                
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt1 = 0;
    int iCnt2 = 0;
    

    for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
    {
            
        for(iCnt2 = 1; iCnt2 <= iCol; iCnt2++)
        {
            if(iCnt1 == iCnt2 || iCnt2 < iCnt1)
            {
                printf("*\t");
            }
            else 
            {
                printf("#\t");
            }
            
        }

        printf("\n");
        
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows : ");
    scanf("%d", &iValue1);

    printf("Enter number of columns : ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}