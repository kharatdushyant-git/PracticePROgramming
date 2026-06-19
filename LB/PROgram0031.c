/*

Q31) Write a PROgram which accept number and displays its pattern as folllows

    input :- 5 or -5
    output :- *  *  *   *   *   #   #   #   #   #

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
        printf("Invalid Input\n");
    }

    printf("Pattern for Given number is : \n");

    for(iCnt = 1; iCnt <= (2 * iNo1); iCnt++)
    {
        if(iCnt <= iNo1)
        {
            printf("* ");
        }
        else
        {
            printf("# ");
        }
    }
    
    /*

    for(iCnt = 1; iCnt <= iNo1; iCnt++)
    {
        printf("\t*\t");
    }

    for(iCnt = 1; iCnt <= iNo1; iCnt++)
    {
        printf("\t#\t");
    }

    */

}

int main()
{
    int iValue1 = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue1);

    Display(iValue1);

    return 0;
}