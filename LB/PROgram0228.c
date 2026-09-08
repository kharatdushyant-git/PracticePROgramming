/*

Assignment 43

Question 3:
Write a program which accepts file name from user and count
number of white spaces from that file.

Input:
Demo.txt

Output:
Number of white spaces are 13

*/

#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>

int CountWhiteSpaces(char FName[])
{
    int fd = 0;
    int iRet = 0;
    int iCount = 0;
    int Arr[100];

    fd = open(FName, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to Open File\n");
    }

    iRet = _read(fd, Arr, sizeof(Arr));

    for(int i = 0; i < iRet ; i++)
    {        
        if(Arr[i] == ' ')
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

    printf("Enter the FileName : ");
    scanf("%s",FileName);

    int iRet = 0;

    iRet = CountWhiteSpaces(FileName);

    printf("WhiteSpaces are : %d",iRet);

    return 0 ;
}