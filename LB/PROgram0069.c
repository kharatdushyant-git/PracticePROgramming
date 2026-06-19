/* 

Q69) Write a Program which accepts N numbers from user and and another number and Display numbe in range of taken number from user 

    Input  :- 6
    input :- 60
    input :- 90
    Elements :- 85 88 3 80 93 88

    Output :- 85 83 88

*/

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iNo1, int iNo2)
{
    int iCount = 0;

    for(iCount = 0; iCount < iLength; iCount++)
    {
        if((Arr[iCount] >= iNo1) && (Arr[iCount] <= iNo2))
        {
           printf("Elements in the Range are : %d ",Arr[iCount]); 
        }

    }

}

int main()
{
    int iSize, iCnt, iValue1, iValue2 = 0;
    int * Brr = 0;
    int iRet = 0;

    printf("Enter Number Of Elements : ");
    scanf("%d",&iSize);

    printf("Enter the First number : ");
    scanf("%d",&iValue1);

    printf("Enter the Second number  : ");
    scanf("%d",&iValue2);

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
    
    Range(Brr,iSize,iValue1,iValue2);

    free(Brr);

    return 0;
}