/* 

Q67) Write a Program which accepts N numbers from user and and another number and Display first occurence index of that number 

    Input  :- 7
    input :- 88
    Elements :- 85 66 3 80 93 88 88

    Output :- index 5

*/

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo1)
{
    int iCount = 0; 

    for(iCount = 0; iCount < iLength; iCount++)
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

    iRet = FirstOcc(Brr,iSize,iValue1);

    if(iRet == -1)
    {
        printf("There is no such Number");
    }
    else
    {
        printf("Fisrt Occurancce of number is : %d",iRet);
    }

    free(Brr);

    return 0;
}