/*

Assignment 44

Question 2:
Write application which accept file name from user and create
that file.

Input:
Demo.txt

Output:
File created successfully.

*/

#include<stdio.h>
#include<io.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char fName[100];
    int fd = 0;

    printf("Enter the File Name : ");
    scanf("%s",fName); 

    fd  = creat(fName, 0777);

    if(fd == -1)
    {
        printf("Unable to open file");  
    }

    printf("File created Succesfully...");

    close(fd);

    return 0;
}