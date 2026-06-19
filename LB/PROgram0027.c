/*

Q27) Write a PROgram for a single digit from user and print it into word

    input :- 9
    output :- Nine

    input :- 12
    output :- Invalid input

*/

#include<stdio.h>

void Display(int iNo1)
{
    int iCnt = 0;

    char * cArr[] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

    if((iNo1 <= -1) || (iNo1 > 9))
    {
        printf("Invalid Input\n");
        return;
    }

    printf("%s ",cArr[iNo1]);
    
}

int main()
{
    int iValue1 = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue1);

    Display(iValue1);

    return 0;
}