/*

Q74) write a PROgram which accept N number from user and Display all such number which contain 3 digit 

    input :- 6
    input :- 115 50 3 46 76 343

    output :- 115 343

*/

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int iLength)
{
    int iCount = 0;

    printf("The number which Consist 3 Digits are : ");

    for(iCount = 0; iCount < iLength; iCount++)
    {
        if((Arr[iCount] >= 100 && Arr[iCount] <= 999) ||
           (Arr[iCount] <= -100 && Arr[iCount] >= -999))
        {
            printf("%d ",Arr[iCount]);
        }
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

    Digits(Brr, iSize);

    free(Brr);

    return 0;
}