/*

Q39) Write a program which take temperature in fahrenheit and convert it into celcuis
    (1 Celsuis = (fahrenheit - 32) * (5/9))

*/

#include<stdio.h>


double Fhtocs(float fAhrenheit)
{
    double dCelsuis = 0.0;

    dCelsuis = (fAhrenheit - 32) * (5.0/9.0);

    return dCelsuis;
}

int main()
{
    float fValue1 = 0.0f;
    double dRet = 0.0;

    printf("Enter the temperature in fahrenheit : ");
    scanf("%f",&fValue1);

    dRet = Fhtocs(fValue1);

    printf("Converted Fehreheit temperature into celsuis is : %lf",dRet);

    return 0;
}