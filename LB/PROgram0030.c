/*

Q30) Write a PROgram which accept number and displays its table in reverse

    input :- 2
    output :- 2  4  6  8  10  12  14  16  18  20

*/

#include<stdio.h>

void DisplayTable(int iNo1)
{
    int iCnt = 0;

    //Updator
    if(iNo1 < 0)
    {
        printf("Negative Value inserted converting into Positive.\n");

        iNo1 = -iNo1;
    }

    else if(iNo1 == 0)
    {
        printf("Invalid Input\n");
    }

    printf("Reverse Table of Given number is : ");
    
    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("% d",iNo1 * iCnt);
    }

}

int main()
{
    int iValue1 = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue1);

    DisplayTable(iValue1);

    return 0;
}