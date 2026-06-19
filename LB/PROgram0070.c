/*

Q70) write a PROgram which accept N number from user and returns Product of all odd number 

    input :- 6
    input :- 15 50 3 46 76 34

    output :- 45

*/

#include<stdio.h>
#include<stdlib.h>

int ReturnOdd(int Arr[],int iLength)
{
    int iCount = 0;
    int iProduct = 1;

    for(iCount = 0; iCount < iLength; iCount++)
    {
        if(Arr[iCount] % 2 != 0)
        {
            iProduct *= Arr[iCount];
        }
    }

    return iProduct;
}

int main()
{
    int iCnt ,iSize = 0;
    int *Brr = NULL;
    int iRet = 0;

    printf("Enter the number of Elements : ");
    scanf("%d",&iSize);

    Brr = (int *)malloc(iSize * sizeof(int));

    printf("Please Enter %d Elements\n",iSize);

    if(iRet == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d Element : ",iCnt + 1);
        scanf("%d",&Brr[iCnt]);
    }

    iRet = ReturnOdd(Brr, iSize);

    printf("Product of all Odd Number is : %d",iRet);

    free(Brr);

    return 0;
}