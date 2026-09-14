/*

Assignment 44

Question 4:
Write application which accept file name from user and display
size of file.

Input:
Demo.txt

Output:
File size is 56 bytes.

*/

#include<stdio.h>
#include<io.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char fName[100];
    int fd = 0;
    int iSize = 0;

    printf("Enter the File Name : ");
    scanf("%s",fName); 

    fd  = open(fName, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file");  
    }

    iSize = lseek(fd , 0 , SEEK_END);

    printf("File Size is : %d Bytes ", iSize);

    close(fd);

    return 0;
}