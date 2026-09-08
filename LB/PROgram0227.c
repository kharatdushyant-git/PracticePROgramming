/*

Assignent 43

Question 2:
Write a program which accepts file name from user and count
number of Small characters from that file.

Input:
Demo.txt

Output:
Number of capital characters are 23

*/
#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <fcntl.h>

int CountSmall(char FName[])
{
    int fd = 0;
    int iRet = 0;
    int iCount = 0;
    char Arr[100];

    fd = _open(FName, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file");
        return -1;
    }

    iRet = _read(fd, Arr, sizeof(Arr));

    for(int i = 0; i < iRet; i++)
    {
        if(Arr[i] >= 'a' && Arr[i] <= 'z')
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

    printf("Enter file name: ");
    scanf("%s", FileName);

    iRet = CountSmall(FileName);

    printf("Number of Small characters are  : %d", iRet);

    return 0;
}