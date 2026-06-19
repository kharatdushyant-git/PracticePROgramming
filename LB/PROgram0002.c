/*

Q2) Write a PROgram that print "Marvellous" 5 times on Screen

*/

#include<stdio.h>

void Display(int iNo1)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo1; iCnt++)
    {
        printf("<<<<<<<<<<<<Marvellous>>>>>>>>>\n");
    }

}

int main()
{
    int iValue1 = 0;

    printf("Enter number of Itration : ");
    scanf("%d",&iValue1);

    Display(iValue1);

    return 0;

}