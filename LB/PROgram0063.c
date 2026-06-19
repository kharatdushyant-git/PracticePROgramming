/* 

Q63) Write a Program which accepts N numbers from user and Check whether it consist of 11 or not

    Input  :- 6
    Elements :- 85 66 11 80 93 88

    Output :- 1 

*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

bool Check11(int Arr[], int iLength)
{
    int iCount = 0; 

    for(iCount = 0; iCount < iLength; iCount++)
    {
        if(Arr[iCount] == 11)
        {
            return TRUE;
        }

    }

    return FALSE;
    
}

int main()
{
    int iSize, iCnt = 0;
    int * Brr = 0;
    bool bRet = FALSE;

    printf("Enter Number Of Elements : ");
    scanf("%d",&iSize);

    Brr = (int *)malloc(iSize * sizeof(int));

    printf("Please Enter %d Elements\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d Element : ",iCnt + 1);
        scanf("%d",&Brr[iCnt]);
    }

    bRet = Check11(Brr,iSize);

    if(bRet == TRUE)
    {
        printf("Array Consists of 11");
    }    
    else
    {
        printf("Array don't have 11");
    }

    free(Brr);

    return 0;
}