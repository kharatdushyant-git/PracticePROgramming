/*

Assignment 44

Question 5:
Write application which accept file name from user and one string
from user. Write that string at the end of file.

Input:
Demo.txt
Hello World

Output:
Write Hello World at the end of Demo.txt file.

*/

#include<stdio.h>
#include<io.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char fName[100];
    char str[100];
    int fd = 0;

    printf("Enter the File Name : ");
    scanf("%s",fName); 

    getchar();

    printf("Enter the String : ");
    fgets(str, sizeof(str), stdin); // Scanf :             fgets : 
                                    // Hello World        Hello World
                                    //   ↓                     ↓
                                    //  Hello             Hello World

    fd  = open(fName, O_WRONLY | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open file");  
    }

    write(fd, str, strlen(str));

    printf("Write %s at the end of %s file", str, fName);

    close(fd);

    return 0;
}
