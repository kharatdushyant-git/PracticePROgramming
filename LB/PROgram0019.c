/*

Q19) Write PROgram which print Summation of All its non Fators

    input :- 12
    ouput :- 50

*/

#include<stdio.h>

int SummationNonFactos(int iNo1)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt < iNo1; iCnt++)
    {
        if(iNo1 % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue1 = 0;
    int iRet = 0;

    printf("Enter the Number to Know Summation of Non factor of inserted number : ");
    scanf("%d",&iValue1);

    iRet = SummationNonFactos(iValue1);

    printf("SUmmation is : %d",iRet);

    return 0;
}