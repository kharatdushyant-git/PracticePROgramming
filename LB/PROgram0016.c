/*

Q16)Write a PROgram which accept number from user and Display its multiplication of factors

    input :- 12
    output :- 144   (1*2*3*4*6)

*/

#include<stdio.h>

int MultFactor(int iNo1)
{
    int iCnt = 0;
    int iMult = 1;

    for(iCnt = 1; iCnt < (iNo1 / 2) ; iCnt++)
    { 
        if(iNo1  % iCnt == 0)
        {
            iMult = iMult * iCnt;
        }
    }

    return iMult;

}

int main()
{
    int iValue1 = 0;

    int iRet = 0;

    printf("Enter number For to Know Multiplication of numbers factor : ");
    scanf("%d",&iValue1);

    iRet = MultFactor(iValue1);

    printf("Multiplication of factors for given number is : %d",iRet);

    return 0;

}