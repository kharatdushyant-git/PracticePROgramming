/* 

Q68) Write a Program which accepts N numbers from user and and another number and Display last occurence index of that number 

    Input  :- 6
    input :- 88
    Elements :- 85 88 3 80 93 88

    Output :- index 5

*/

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo1)
{
    int iCount = 0; 

    for(iCount = iLength - 1 ; iCount >= 0; iCount--)
    {
        if(Arr[iCount] == iNo1)
        {
            return iCount;
        }

    }

    return -1;
}

int main()
{
    int iSize, iCnt, iValue1 = 0;
    int * Brr = 0;
    int iRet = 0;

    printf("Enter Number Of Elements : ");
    scanf("%d",&iSize);

    printf("Enter the number for finding its index : ");
    scanf("%d",&iValue1);

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

    iRet = LastOcc(Brr,iSize,iValue1);

    if(iRet == -1)
    {
        printf("There is no such Number");
    }
    else
    {
        printf("Last Occurancce of number is : %d",iRet);
    }

    free(Brr);

    return 0;
}