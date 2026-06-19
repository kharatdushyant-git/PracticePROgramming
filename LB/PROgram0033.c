/*

Q33) Write a PROgram which accept number and print its even factorial

    input :- 5
    output :- 8   (4 * 2)

*/

#include<stdio.h>

int EvenFact(int iNo1)
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
        if(iCnt % 2 == 0)
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

    iRet = EvenFact(iValue1);

    printf("<<<Even factorial of given number is : %d>>>",iRet);

    return 0;
}