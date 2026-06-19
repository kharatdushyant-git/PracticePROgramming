/*

Q42) Write a PROgram which Accept number from user and return count of Odd digits

    input :- 2395
    output :- 3

*/

#include<stdio.h>

int CheckOdd(int iNo1)
{
    int iCnt = 0;
    int iDigit = 0;

    for(; iNo1 != 0;)
    {
        iDigit = iNo1 % 10;

        if(iDigit % 2 != 0)
        {
            iCnt++;
        }

        iNo1 = iNo1 / 10;
    }

    return iCnt;
}

int main()
{
    int iValue1 = 0;
    int iRet = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue1);

    iRet = CheckOdd(iValue1);

    printf("Count of Odd Digits is : %d",iRet);

    return 0;
}