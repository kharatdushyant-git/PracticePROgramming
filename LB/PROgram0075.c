/*

Q75) Write a PROgram which n number from user and Display summantion of digit of each number in array

    input :- 6
    input :- 12 35 4 223 65 765

    ouput :- 3 8 4 8 11 18

*/

#include<stdio.h>
#include<stdlib.h>

void SumDigits(int Arr[],int iLength)
{
    int iCount = 0;
    int iNo1 = 0;
    int iDigit = 0;
    int iSum = 0;

    printf("Summation of Digits of all number are : ");

    for(iCount = 0; iCount < iLength; iCount++)
    {
        iNo1 = Arr[iCount];
        iSum = 0;

        for(; iNo1;)
        {
            iDigit = iNo1 % 10;
            
            iSum = iSum + iDigit;

            iNo1 = iNo1 / 10;
            
        }

        printf("%d ",iSum);
    }
    
}

int main()
{
    int iCnt ,iSize = 0;
    int *Brr = NULL;
    

    printf("Enter the number of Elements : ");
    scanf("%d",&iSize);

    Brr = (int *)malloc(iSize * sizeof(int));

    printf("Please Enter %d Elements\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d Element : ",iCnt + 1);
        scanf("%d",&Brr[iCnt]);
    }

    SumDigits(Brr, iSize);

    free(Brr);

    return 0;
}