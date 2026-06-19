/*

Q8) Write a PROgram that Accept one number from user if number is less than 10 print "Hello" other wise print "Demo" 

*/

#include<stdio.h>

void Display(int iNo1)
{
    if(iNo1 <10)
    {
        printf("<<<Hello!!!>>>");
    }
    else
    {
        printf("<<<Demo>>>");
    }

}

int main()
{
    int iValue1 = 0;

    printf("Enter The number for printing Hello or Demo : ");
    scanf("%d",&iValue1);

    Display(iValue1);

    return 0;

}