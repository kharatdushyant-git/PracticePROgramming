/*

Assignment 43

Question 5:
Write a program which accepts file name and one count from user
and read that number of characters from starting position.

Input:
Demo.txt    12

Output:
Display first 12 characters from Demo.txt

*/

#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <fcntl.h>

void Display(char FName[], int iSize)
{
    int fd = 0;
    int iRet = 0;
    char Arr[100];

    fd = _open(FName, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file");
        return;
    }

    iRet = _read(fd, Arr, iSize);

    for(int i = 0; i < iRet; i++)
    {
        printf("%c", Arr[i]);
    }

    _close(fd);
}

int main()
{
    char FileName[30];
    int iValue = 0;

    printf("Enter file name: ");
    scanf("%s", FileName);

    printf("Enter the number of characters: ");
    scanf("%d", &iValue);

    Display(FileName, iValue);

    return 0;
}