'''

Assigment 29

Q3) Copy File Contents into a New File (Command Line)

Problem Statement:

Write a program which accepts an existing file name through command
line arguments, creates a new file, and copies all contents from the
existing file into the new file.

Input (Command Line):

ABC.txt Demo.txt

Expected Output:

Contents of ABC.txt copied into Demo.txt.

'''

import sys


def main():

    print("Enter Source FilName and DEstination File name : ",end ="")

    SourceFile = sys.argv[1]
    DestinationFile = sys.argv[1]

    SourceFile = open(SourceFile,"r")
    DestinationFile = open(DestinationFile,"w")

    Data = SourceFile.read()

    DestinationFile.write(Data)

    SourceFile.close()
    DestinationFile.close()

    print("Contents of", SourceFileName,"copied into", DestinationFileName)

if __name__ == "__main__":
    main()
