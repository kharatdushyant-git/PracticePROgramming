/*
Q56) Write a Program which accepts N numbers from user and returns the difference between summation of even elements
    and summation of odd elements.

    Input  : 6
    Elements : 85 66 3 80 93 88

    Output : 53 (234 - 181)

*/

#include <stdio.h>
#include <stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCount = 0;
    int iEsum = 0;
    int iOsum = 0;

    for(iCount = 0; iCount < iLength; iCount++)
    {
        if(Arr[iCount] % 2 == 0)
        {
            iEsum += Arr[iCount];
        }
        else
        {
            iOsum += Arr[iCount];
        }
    }

    return (iEsum - iOsum);
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *Brr = NULL;
    int iRet = 0;

    printf("Enter the number of elements : ");
    scanf("%d", &iSize);

    Brr = (int *)malloc(iSize * sizeof(int));

    if(Brr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Please Enter %d elements \n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ", iCnt + 1);
        scanf("%d", &Brr[iCnt]);
    }

    iRet = Difference(Brr, iSize);

    printf("Difference is : %d\n", iRet);

    free(Brr);

    return 0;
}