/*

Q26) Write a PROgarm which accept number from user and if number is leass than 50 then print small ,if it greater than 50
     and less than 100 print medium, if its greater than 100 orint large

     intput :- 75
     output :- medium

*/

#include<stdio.h>

void Display(int iNo1)
{
    if(iNo1 < 50)
    {
        printf("<<<Small>>>");
    }

    else if(iNo1 > 50 && iNo1 < 100)
    {
        printf("<<<Medium>>>");
    }

    else
    {
        printf("<<<Large>>>");
    }

}

int main()
{
    int iValue1 = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue1);

    Display(iValue1);

    return 0;
}