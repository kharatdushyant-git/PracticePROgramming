/*

Q51) Write a PROgram which accept a number from user and display its digit in reverse order

input :- 2396
output :- 6
          9 
          3
          2

*/

#include<stdio.h>

void Display(int iNo1)
{
    int iDigit = 0;
    
    for(; iNo1 != 0; )
    {
        iDigit = iNo1 % 10;

        printf("%d\n",iDigit);

        iNo1 = iNo1 / 10;
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