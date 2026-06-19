/*

Q60) Write a Program which accepts N numbers from user and Display all such element which are Multiple of 11

    Input  :- 6
    Elements :- 85 66 3 80 93 88

    Output :- 66 88

*/

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCount = 0;

    printf("Element which are Multiple of 11 : ");
    
    for(iCount = 0; iCount < iLength; iCount++)
    {
        if(Arr[iCount] % 11 == 0)
        {
            printf("%d ",Arr[iCount]);
        }
    }
}

int main()
{
    int iCnt , iSize = 0;
    int * Brr = NULL;

    printf("Enter Number of Elements : ");
    scanf("%d",&iSize);

    Brr = (int *)malloc(iSize * sizeof(int));

    printf("Please Enter %d Elements\n",iSize);

    if(Brr == NULL)
    {
        printf("Unable to Allocate memory ");
        return -1;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter the %d Element : ",iCnt + 1);
        scanf("%d",&Brr[iCnt]);
    }

    Display(Brr,iSize);

    free(Brr);

    return 0;
}