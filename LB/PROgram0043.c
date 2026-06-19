/*

Q43) Write a PROgram which Accept number from user and return count of digits if they are between 3 to 7

    input :- 2395
    output :- 2

*/

#include<stdio.h>

int Check3to7(int iNo1)
{
    int iCnt = 0;
    int iDigit = 0;

    for(; iNo1 != 0;)
    {
        iDigit = iNo1 % 10;

        if((iDigit >= 3) && (iDigit <= 7))
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

    iRet = Check3to7(iValue1);

    printf("Count of Digits which are between 3 to 7 is : %d",iRet);

    return 0;
}