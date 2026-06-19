/* 

Q65) Write a Program which accepts N numbers from user and and another number and Display Frequency of that number 

    Input  :- 6
    input :- 66
    Elements :- 85 66 3 80 93 88

    Output :- 1

*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo1)
{
    int iCount = 0; 
    int iCnt2 = 0;

    for(iCount = 0; iCount < iLength; iCount++)
    {
        if(Arr[iCount] == iNo1)
        {
            iCnt2++;
        }
    }
    
    return iCnt2;
}

int main()
{
    int iSize, iCnt, iValue1 = 0;
    int * Brr = 0;
    int iRet = 0;

    printf("Enter Number Of Elements : ");
    scanf("%d",&iSize);

    printf("Enter the number for finding its Frequency : ");
    scanf("%d",&iValue1);

    Brr = (int *)malloc(iSize * sizeof(int));

    printf("Please Enter %d Elements\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d Element : ",iCnt + 1);
        scanf("%d",&Brr[iCnt]);
    }

    iRet = Frequency(Brr,iSize,iValue1);

    printf("Frequency of Given number  is : %d",iRet);

    free(Brr);

    return 0;
}