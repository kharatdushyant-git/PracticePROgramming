'''

Assignment 29

Q5) Frequency of a String in File

Problem Statement:

Write a program which accepts a file name and one string from the
user and returns the frequency (count of occurrences) of that string
in the file.

Input:

Demo.txt Marvellous

Expected Output:

Display the frequency of Marvellous in Demo.txt.
'''

def main():

    FileName = input("Enter File Name : ")
    String = input("Enter String : ")

    File = open(FileName, "r")

    Data = File.read()

    File.close()

    Count = Data.count(String)

    print("Frequency of", String, "is :", Count)


if __name__ == "__main__":
    main()