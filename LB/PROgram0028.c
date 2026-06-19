/*

Q28) Write a PROgram accept number from user and find factorial of given number

    input :- 5
    output :- 120  (5*4*3*2*1)

*/
#include<stdio.h>

int Factorial(int iNo1)
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
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue1 = 0;

    int iRet = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue1);

    iRet = Factorial(iValue1);

    printf("Factorial is : %d",iRet);

    return 0;
}