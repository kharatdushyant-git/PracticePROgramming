/*

Q72) write a PROgram which accept N number from user and returns the Smallest number 

    input :- 6
    input :- 15 50 3 46 76 34

    output :- 3

*/

#include<stdio.h>
#include<stdlib.h>

int Mini(int Arr[],int iLength)
{
    int iCount = 0;
    int iMini = Arr[0];
    
    for(iCount = 0; iCount < iLength; iCount++)
    {
        if(Arr[iCount] < iMini)
        {
            iMini = Arr[iCount];
        }
    }

    return iMini;
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

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d Element : ",iCnt + 1);
        scanf("%d",&Brr[iCnt]);
    }

    iRet = Mini(Brr, iSize);

    printf("the Smallest Number is : %d",iRet);

    free(Brr);

    return 0;
}