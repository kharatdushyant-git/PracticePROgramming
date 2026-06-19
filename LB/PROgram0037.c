/*

Q37) Write a PROgram which Accept two parameter as width and height of rectangle from user ans print its area 

*/

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0f;

    dArea = fWidth * fHeight;

    return dArea;
}

int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;

    double dRet = 0.0;

    printf("Enter the Width of Rectangle : ");
    scanf("%f",&fValue1);

    printf("Enter the Height of Rectangle : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of Circle is : %lf",dRet);

    return 0;
}