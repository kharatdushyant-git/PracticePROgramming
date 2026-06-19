/*

Q37) Write a PROgram which Accept Distance in Kilometer and convert it meter
     (1 Kilometer = 1000 meter)

*/

#include<stdio.h>

int KMtoMeter(int iNo1)
{
    int iMeter = 0;

    iMeter = iNo1 * 1000;

    return iMeter;
}

int main()
{
    int iValue1 = 0;

    int iRet = 0;

    printf("Enter the Distance : ");
    scanf("%d",&iValue1);

    iRet = KMtoMeter(iValue1);

    printf("\nConverted Distance to Meter is is : %d",iRet);

    return 0;
}