/* 

Q64) Write a Program which accepts N numbers from user and Display Frequency of 11 number 

    Input  :- 6
    Elements :- 85 66 3 80 93 88

    Output :- 0

*/

#include<stdio.h>
#include<stdlib.h>

int Count11(int Arr[], int iLength)
{
    int iCount = 0; 
    int iCnt2 = 0;

    for(iCount = 0; iCount < iLength; iCount++)
    {
        if(Arr[iCount] == 11)
        {
            iCnt2++;
        }
    }
    
    return iCnt2;
}

int main()
{
    int iSize, iCnt = 0;
    int * Brr = 0;
    int iRet = 0;

    printf("Enter Number Of Elements : ");
    scanf("%d",&iSize);

    Brr = (int *)malloc(iSize * sizeof(int));

    printf("Please Enter %d Elements\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d Element : ",iCnt + 1);
        scanf("%d",&Brr[iCnt]);
    }

    iRet = Count11(Brr,iSize);

    printf("Frequency of 11 is : %d",iRet);

    free(Brr);

    return 0;
}