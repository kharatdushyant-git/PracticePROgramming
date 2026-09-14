/*

Assignment 44

Question 1:
Write application which accept file name from user and open
that file in read mode.

Input:
Demo.txt

Output:
File opened successfully.

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

    fd  = open(fName, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file");  
    }

    printf("File opened Succesfully...");

    close(fd);

    return 0;
}// Dushyant Kharat
