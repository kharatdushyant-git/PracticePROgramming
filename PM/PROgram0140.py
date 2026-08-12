'''

Assignment 28

Q1) Count Lines in a File

Problem Statement:

Write a program which accepts a file name from the user and counts
how many lines are present in the file.

Input:
Demo.txt

Expected Output:
Total number of lines in Demo.txt.
'''

def main():

    FileName = input("Enter the File Name : ")

    File = open(FileName,"r")

    Count = 0

    for Line in File:
        Count += 1

    File.close()

    print(f"The number of lines are {Count} in : {FileName}" )


if __name__ == "__main__":
    main()    