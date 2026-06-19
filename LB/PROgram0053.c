/*

Q53) Write a PROgram which accpet number and count how much occurance of 2 in that Given number

    input :- 2025
    output :- 2

*/

#include<stdio.h>

int CountTwo(int iNo1)
{
    int iDigit = 0;
    int iCnt = 0;

    for(; iNo1 !=0; )
    {
        iDigit = iNo1 % 10;
       
        if(iDigit == 2)
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

    iRet = CountTwo(iValue1);

    printf("Occurences of 2 in Given Number : %d",iRet);

    return 0;
}