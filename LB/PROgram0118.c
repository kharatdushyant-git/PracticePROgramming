/*

Q118) Write a PROgram that print following pattern

     input :- iRow = 4  iCol = 4
     output :-
                a   b   c   d
                1   2   3   4
                a   b   c   d
                1   2   3   4
                
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
            (iCnt1 % 2 != 0) ? printf("%c\t",'a' + iCnt2 -1) : printf("%d\t",iCnt2 );
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