/*

Q34) Write a PROgram which accept number and print its Odd factorial

    input :- 5
    output :- 15   (5 * 3  * 1)

*/

#include<stdio.h>

int OddFact(int iNo1)
{
    int iCnt = 0;
    int iFact = 1;

    //Updator
    if(iNo1 < 0)
    {
        printf("Negative Value inserted converting into Positive.\n");

        iNo1 = -iNo1;
    }

    for(iCnt = iNo1; iCnt > 1; iCnt--)
    {
        if(iCnt % 2 != 0)
        {
            iFact = iFact * iCnt;
        }
    }

    return iFact;
}

int main()
{
    int iValue1 = 0;
    int iRet = 0;

    printf("Enter the Number : ");
    scanf("%d", &iValue1);

    iRet = OddFact(iValue1);

    printf("<<<Odd factorial of given number is : %d>>>",iRet);

    return 0;
}