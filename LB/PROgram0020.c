/*

Q20) Write a PROgram which accep one number and return diff between summation of factors and non factors

    input :- 12
    outpt :- -34  (16-50)

*/

#include<stdio.h>

int FactDiff(int iNo1)
{
    int iCnt = 0;
    int iFact = 0;
    int iNfact = 0;
    int iDiff = 0;

    for(iCnt = 1; iCnt < iNo1; iCnt++)
    {
        if(iNo1 % iCnt == 0)
        {
            iFact = iFact + iCnt;
        }

        else if(iNo1 % iCnt != 0)
        {
            iNfact = iNfact + iCnt;
        }

        iDiff = iFact - iNfact;
    }

    return iDiff;
}

int main()
{
    int iValue1 = 0;
    int iRet = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue1);

    iRet = FactDiff(iValue1);

    printf("Diff Beten Summation of factor & Non Factor is : %d",iRet);

    return  0;

}