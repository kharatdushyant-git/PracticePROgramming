'''

Assignment 28

Q3) Display File Line by Line

Problem Statement:

Write a program which accepts a file name from the user and displays
the contents of the file line by line on the screen.

Input:
Demo.txt
'''


def main():

    FileName = input("Enter the File Name : ")

    File = open(FileName,"r")

    Count = 0

    for Line in File:
        print(Line, end ="")

    File.close()
    
if __name__ == "__main__":
    main()    