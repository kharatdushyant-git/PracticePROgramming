/*

Q5) write a PROgram to which Accept one number from user ans print that number of * on Screen

*/

#include<stdio.h>

void Display(int iNo1)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo1; iCnt++)
    {
        printf(" * \n");
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