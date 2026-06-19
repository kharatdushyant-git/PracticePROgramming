/*

Q22) Write that accept one number from user and print till that of number

    input :- 8
    output :- 1   2   3   4   5   6   7   8

*/

#include<stdio.h>

void Display(int iNo1)
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
        printf("Invalid input\n");

        return;
    }

    for(iCnt = 1; iCnt <= iNo1; iCnt++)
    {
        printf("%d\t",iCnt);
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