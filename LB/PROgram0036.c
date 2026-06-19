/*

Q36) Write a PRogram which Accept raduis of circle from user and calculates its area
     consider value of PI as 3.14(Area = PI*Raduis * Raduis)

*/
#include<stdio.h>

#define PI 3.14

double DisplayArea(float fRaduis)
{
    double dArea = 0.0f;

    dArea = PI * fRaduis * fRaduis;

    return dArea;
}

int main()
{
    float fValue1 = 0.0f;
    double dRet = 0.0;

    printf("Enter the Raduis for finding Area of Circle : ");
    scanf("%f",&fValue1);

    dRet = DisplayArea(fValue1);

    printf("Area of Circle is : %lf",dRet);

    return 0;
}