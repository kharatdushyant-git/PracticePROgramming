'''

Assignment 28

Q4) Copy Contents of One File into Another

Problem Statement:

Write a program which accepts two file names from the user.

First file is an existing file.

Second file is a new file.

Copy all contents from the first file into the second file.

Input:
ABC.txt
Demo.txt

Expected Output:
Contents of ABC.txt copied into Demo.txt.
'''

def main():

    SourceName = input("Enter Existing File Name : ")
    DestinationName = input("Enter New File Name : ")

    SourceFile = open(SourceName, "r")
    DestinationFile = open(DestinationName, "w")

    for Line in SourceFile:
        DestinationFile.write(Line)

    SourceFile.close()
    DestinationFile.close()

    print("Contents of", SourceName,
          "copied into", DestinationName)


if __name__ == "__main__":
    main()