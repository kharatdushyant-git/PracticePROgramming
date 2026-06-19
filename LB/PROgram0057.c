/*

Q57) Write a Program which accepts N numbers from user and Display all such element which are divisible by 5

    Input  :- 6
    Elements :- 85 66 3 80 93 88

    Output :- 85 80

*/

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCount = 0;

    printf("Elemet which are Divisible by 5 are : ");

    for(iCount = 0; iCount < iLength; iCount++)
    {
        if(Arr[iCount] % 5 == 0)
        {
            printf("%d\t",Arr[iCount]);
        }
    }
}

int main()
{
    int iCnt = 0;
    int iSize = 0;
    int * Brr = 0;

    printf("Enter Number of Element : ");
    scanf("%d",&iSize);
     
    Brr = (int *)malloc(iSize * sizeof(int));

    if(Brr == NULL)
    {
        printf("Unable to Allocate memory");
        return -1;
    }

    printf("Please Enter %d Elements\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter Element %d : ",iCnt + 1);
        scanf("%d",&Brr[iCnt]);
    }

    Display(Brr,iSize);

    free(Brr);

    return 0;
}