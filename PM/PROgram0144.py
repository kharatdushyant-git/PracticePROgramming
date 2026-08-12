'''

Assignment 28

Q5) Search a Word in File

Problem Statement:

Write a program which accepts a file name and a word from the user
and checks whether that word is present in the file or not.

Input:
Demo.txt
Marvellous

Expected Output:
Display whether the word Marvellous is found in Demo.txt or not.
'''

def main():

    FileName = input("Enter File Name : ")
    Word = input("Enter Word to Search : ")

    File = open(FileName, "r")

    Found = False

    for Line in File:
        Words = Line.split()

        if Word in Words:
            Found = True
            break

    File.close()

    if Found:
        print("Word", Word, "is found in", FileName)
    else:
        print("Word", Word, "is not found in", FileName)


if __name__ == "__main__":
    main()