/* 

Q62) Write a Program which accepts N numbers from user and Display diffrenece between Frequency of even number ad odd number 

    Input  :- 6
    Elements :- 85 66 3 80 93 88

    Output :- 1 (3-2)

*/

#include<stdio.h>
#include<stdlib.h>

int CountEvenOdd(int Arr[], int iLength)
{
    int iCount = 0; 
    int iEven = 0;
    int iOdd = 0;

    for(iCount = 0; iCount < iLength; iCount++)
    {
        if(Arr[iCount] % 2 ==0)
        {
            iEven++;
        }
        else
        {
            iOdd ++;
        }
    }
    
    return iEven - iOdd;
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

    iRet = CountEvenOdd(Brr,iSize);

    printf("Differenece between Frequency of even and Odd is : %d",iRet);

    free(Brr);

    return 0;
}