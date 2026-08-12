'''

Assignment 29

Q4) Compare Two Files (Command Line)

Problem Statement:

Write a program which accepts two file names through command line
arguments and compares the contents of both files.

If both files contain the same contents, display Success.

Otherwise display Failure.

Input (Command Line):

Demo.txt Hello.txt

Expected Output:

Success OR Failure
'''

import sys


def main():

    FileName1 = sys.argv[1]
    FileName2 = sys.argv[2]

    File1 = open(FileName1, "r")
    File2 = open(FileName2, "r")

    Data1 = File1.read()
    Data2 = File2.read()

    File1.close()
    File2.close()

    if Data1 == Data2:
        print("Success")
    else:
        print("Failure")


if __name__ == "__main__":
    main()