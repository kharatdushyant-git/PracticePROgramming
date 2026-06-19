/*

Q11) write a PROgram that accept one number from user and print that number of even number on screen

*/

#include<stdio.h>

void PrintEven(int iNo1)
{
    int iCnt = 0;

    if(iNo1 <= 0)
    {
        return;
    }

    for(iCnt = 1; iCnt <= iNo1; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d",iCnt);
            printf(" ");
        }
    }
    
}

int main()
{
    int iValue1 = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue1);
     
    PrintEven(iValue1);

    return 0;

}