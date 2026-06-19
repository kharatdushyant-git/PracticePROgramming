/*

Q44) Write a PROgram which Accept number from user and return count Multiplicationc of Digits

    input :- 2395
    output :- 270  (2*3*9*5)

*/

#include<stdio.h>

int CheckMulti(int iNo1)
{
    int iCnt = 0;
    int iDigit = 0;
    int iMulti = 1;
    

    for(; iNo1 != 0;)
    {
        iDigit = iNo1 % 10;

        iMulti = iMulti * iDigit;

        iNo1 = iNo1 / 10;
    }

    return iMulti;
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