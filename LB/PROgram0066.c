/* 

Q66) Write a Program which accepts N numbers from user and and another number and Display whether it has that number or not 

    Input  :- 6
    input :- 66
    Elements :- 85 66 3 80 93 88

    Output :- TRUE

*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

bool CheckiNo1(int Arr[], int iLength, int iNo1)
{
    int iCount = 0; 
    int iCnt2 = 0;

    for(iCount = 0; iCount < iLength; iCount++)
    {
        if(Arr[iCount] == iNo1)
        {
            return TRUE;
        }
    }
    
    return FALSE;
}

int main()
{
    int iSize, iCnt, iValue1 = 0;
    int * Brr = 0;
    bool bRet = 0;

    printf("Enter Number Of Elements : ");
    scanf("%d",&iSize);

    printf("Enter the number to check whether its present or not : ");
    scanf("%d",&iValue1);

    Brr = (int *)malloc(iSize * sizeof(int));

    printf("Please Enter %d Elements\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d Element : ",iCnt + 1);
        scanf("%d",&Brr[iCnt]);
    }

    bRet = CheckiNo1(Brr,iSize,iValue1);

    if(bRet == TRUE)
    {
        printf("<<<TRUE>>>");
    }
    else
    {
        printf("<<<FALSE>>>");
    }

    free(Brr);

    return 0;
}