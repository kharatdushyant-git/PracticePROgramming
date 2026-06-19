/*

Q9) write a PROgram Which Accpet two number from user and Display Fissrt number in Second number of times

*/

#include<stdio.h>

void Display(int iNo1, int iFrequency)
{
    int iCnt = 0;

    //Updator
    if(iFrequency < 0)
    {
        printf("Negative Frequency inserted COnverting into Positive.\n");
        iFrequency = -iFrequency;
    }
    else if(iFrequency == 0)
    {
        printf("\n");
    }

    for(iCnt = 0; iCnt < iFrequency; iCnt++)
    {
        printf("%d ",iNo1);
    }

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the First number : ");
    scanf("%d",&iValue1);

    printf("Enter the Second number : ");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;

}