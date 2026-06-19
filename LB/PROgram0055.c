/*

Q54) Write a PROgram which accpet number and count how much occurance of 4 in that Given number

    input :- 4025
    output :- 1

*/

#include<stdio.h>

int Count(int iNo1)
{
    int iDigit = 0;
    int iCnt = 0;

    for(; iNo1 !=0; )
    {
        iDigit = iNo1 % 10;
       
        if((iDigit >= 0) && (iDigit <= 6))
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

    iRet = Count(iValue1);

    printf("Occurences of Digit which are less tha 6 in Given Number : %d",iRet);

    return 0;
}