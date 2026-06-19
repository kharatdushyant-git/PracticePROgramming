/*

Q32) Write a PROgram which accept number and convert it into doller

    input :- 10rs
    output :- 700$

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

    printf("Converting currency into Doller'sfor Given Ruppes is : ");

    printf("%d$",iNo1 * 70);

    

}

int main()
{
    int iValue1 = 0;

    printf("Enter the Amount : ");
    scanf("%d", &iValue1);

    printf("You entered : %d Rs\n", iValue1);


    Display(iValue1);

    return 0;
}