/*

Assignment 43

Question 4:
Write a program which accepts file name and one character from
user and count number of occurrences of that character from
that file.

Input:
Demo.txt    'M'

Output:
Frequency of M is 7

*/

#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>

int Count(char FName[], char ch2)
{
    int fd = 0;
    int iRet = 0;
    int iCount = 0;
    char Arr[100];

    fd = _open(FName, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to Open File\n");
        return -1;
    }

    iRet = _read(fd, Arr, sizeof(Arr));

    for(int i = 0; i < iRet; i++)
    {
        if(Arr[i] == ch2)
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
    char ch1;
    int iRet = 0;

    printf("Enter the FileName : ");
    scanf("%s", FileName);

    printf("Enter the Letter to search : ");
    scanf(" %c", &ch1);

    iRet = Count(FileName, ch1);

    printf("Frequency of Letter is : %d", iRet);

    return 0;
}