/*

Q35) Write a PROgram which accept number and print its diff between even factorial and off factorial

    input :- 5
    output :- -7   (8 - 15)

*/

#include<stdio.h>

int DiffFact(int iNo1)
{
    int iCnt = 0;
    int iEven = 1;
    int iOdd = 1;

    //Updator
    if(iNo1 < 0)
    {
        printf("Negative Value inserted converting into Positive.\n");

        iNo1 = -iNo1;
    }

    for(iCnt = iNo1; iCnt > 1; iCnt--)
    {
        if(iCnt % 2 == 0)
        {
            iEven = iEven * iCnt;
        }

        else if(iCnt % 2 != 0)
        {
            iOdd = iOdd * iCnt;
        }
    }

    return iEven - iOdd;
}

int main()
{
    int iValue1 = 0;
    int iRet = 0;

    printf("Enter the Number : ");
    scanf("%d", &iValue1);

    iRet = DiffFact(iValue1);

    printf("<<<Diff Between Odd and Even factorial of given number is : %d>>>",iRet);

    return 0;
}