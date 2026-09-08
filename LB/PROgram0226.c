/*

Assignent 43

Question 1:
Write a program which accepts file name from user and count
number of capital characters from that file.

Input:
Demo.txt

Output:
Number of capital characters are 23

*/

#include<stdio.h>
#include<stdlib.h>
#include <io.h>
#include <fcntl.h>

int CountCapital(char FName[])
{
    int fd = 0;
    int iRet = 0;
    int iCount = 0;
    int Arr[100];

    fd = open(FName, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to Open File");
        return -1;
    }

    iRet = _read(fd, Arr, sizeof(Arr));

    for(int i = 0; i < iRet; i++)
    {
        if(Arr[i] >= 'A' && Arr[i] <= 'z')
        {
            iCount++;
        }
    }

    _close(fd);

    return iCount;
}

int main()
{
    char FileName[30];
    int iRet = 0;

    printf("Enter the File Name : ");
    scanf("%s",FileName);

    iRet = CountCapital(FileName);

    printf("Capital Charator are : %d",iRet);

    return 0;
}