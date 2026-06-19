/*

Q18) write a PROgram which accept one number and print that numbers non factor

    intput :- 12
    output:- 5  7   8   9   10  11 

*/

#include<stdio.h>

void DisplayNonFactor(int iNo1)
{
    int iCnt = 0;

    printf("Non Factors for given Number is : ");

    for(iCnt = 1; iCnt < iNo1; iCnt++)
    {
        if(iNo1 % iCnt != 0)
        {
            printf("%d ",iCnt);
        }
    }

}

int main()
{
    int iValue1 = 0;

    printf("Enter number for kowing NON FACTORS : ");
    scanf("%d",&iValue1);

    DisplayNonFactor(iValue1);

    return 0;

}