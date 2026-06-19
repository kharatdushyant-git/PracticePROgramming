/*

Q48) Write a PROgram Which Accept Range from user ans Display Additonof all number in between that range 

    int :- 23 30
    output :-  212

*/

#include<stdio.h>

int SumDisplay(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    //Filter
    if(iStart < 0)
    {
        printf("Invalid Output :")
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt; 
    }

    return iSum;
}

int main()
{
    int iValue1 , iValue2 = 0;
    int iRet = 0;

    printf("Enter the First number : ");
    scanf("%d",&iValue1);

    printf("Enter the Second number : ");
    scanf("%d",&iValue2);

    iRet = SumDisplayiValue1, iValue2);

    printf("Addition od all Number in this Given Range Are : %d",iRet);

    return 0;
}