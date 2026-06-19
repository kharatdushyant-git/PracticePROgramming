/*

Q6) write a PROgram to which Accept one number from user and print that number of * on screen
    with Updator

*/

#include<stdio.h>

void Display(int iNo1)
{
    int iCnt = 0;

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

    iCnt = 1;
    while(iCnt <= iNo1)
    {
        printf(" * \n");
        iCnt++;
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