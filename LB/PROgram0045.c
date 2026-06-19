/*

Q45) Write a PROgram which Accept number from user and return count of summation of even and odd digits in number

    input :- 2395
    output :- 270  (2*3*9*5)

*/

#include<stdio.h>

int CheckMulti(int iNo1)
{
    int iCnt = 0;
    int iDigit = 0;
    int iEven = 0;
    int iOdd = 0;

    for(; iNo1 != 0;)
    {
        iDigit = iNo1 % 10;

        if(iDigit % 2 == 0)
        {
            iCnt++;
            
            iEven = iEven + iDigit;
        }

        else
        {
            iCnt++;

            iOdd = iOdd + iDigit;
        }

        iNo1 = iNo1 / 10;
    }

    return iEven - iOdd;
}

int main()
{
    int iValue1 = 0;
    int iRet = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue1);

    iRet = CheckMulti(iValue1);

    printf("Multiplication of given number digits is : %d",iRet);

    return 0;
}