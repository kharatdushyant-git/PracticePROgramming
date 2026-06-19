/*

Q40) Write a program which take input as area in square feet and convert it into square meter
    (1 square feet = 0.929 Sqaure meter)

*/

#include<stdio.h>


double FeetToMeter(float fFeet)
{
    double dSqMeter = 0.0;

    dSqMeter = fFeet * 0.0929;

    return dSqMeter;
}

int main()
{
    float fValue1 = 0.0f;
    double dRet = 0.0;

    printf("Enter the Area in Square Feet : ");
    scanf("%f",&fValue1);

    dRet = FeetToMeter(fValue1);

    printf("Converted SQuare feet into Square Meter is : %lf",dRet);

    return 0;
}