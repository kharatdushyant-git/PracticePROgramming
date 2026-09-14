/*

Assignment 44

Question 3:
Write application which accept file name from user and read all
data from that file and display contents on screen.

Input:
Demo.txt

Output:
Display all data of file.

*/

#include<stdio.h>
#include<io.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char fName[100];
    char Buffer[1024];
    int fd = 0;
    int iRet = 0;

    printf("Enter the File Name : ");
    scanf("%s",fName); 

    fd  = open(fName, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file");  
    }

    while((iRet = read(fd, Buffer, sizeof(Buffer))) > 0)
    {
        write(1, Buffer, iRet);
    }

    close(fd);

    return 0;
}