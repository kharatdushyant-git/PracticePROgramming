'''

Assignment 28

Q2) Count Words in a File

Problem Statement:

Write a program which accepts a file name from the user and counts
the total number of words in that file.

Input:
Demo.txt

Expected Output:
Total number of words in Demo.txt.
'''

def main():

    FileName = input("Enter the File Name : ")

    File = open(FileName,"r")

    Count = 0

    for Line in File:
        words = Line.split()
        Count += len(words)

    File.close()

    print(f"The number of words are {Count} in : {FileName}")

if __name__ == "__main__":
    main()    