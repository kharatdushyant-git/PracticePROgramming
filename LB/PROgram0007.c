/*

Q7) write PROgram that accept one value form user and print that number of * on Screen 
    without counter

*/

#include<stdio.h>

void Display(int iNo1)
{

    //Updator
    if(iNo1 < 0)
    {
        printf("Negative number entered. Converting to positive.\n");

        iNo1 = -iNo1;
    }
    else if(iNo1 == 0)
    {
        printf("Invalid input\n");
        return;
    }

    while(iNo1 > 0)
    {
        printf(" * \n");
        iNo1--;
    }
    
}

int main()
{
    int iValue1 = 0;

    printf("Enter the Number of * you want to Print : ");
    scanf("%d",&iValue1);

    Display(iValue1);

    return 0;

}