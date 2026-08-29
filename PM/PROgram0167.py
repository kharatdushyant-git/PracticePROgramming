'''
Assignment 32

Q3) Write a program that reads and displays the contents of a
specified text file every minute.

Handle the following conditions:

1. File does not exist
2. File is empty
3. Permission is denied
4. File cannot be opened
'''

import schedule 
import time
import os 

def displayFile(FileName):

    try :
        File = open(FileName, "r")

        Data = File.read()

        File.close()

        if Data == "":

            print("File is Empty")

        else:
            print("-------------------------------------------------------------") 
            print("File Content are : ")
            print(Data)
            print("-------------------------------------------------------------") 

    except FileNotFoundError:

        print("File does not exist :", FileName)

    except PermissionError:

        print("Permission denied :", FileName)

    except OSError:

        print("File cannot be opened :", FileName)

def main():

    FileName = input("Enter the file name : ")

    schedule.every(1).minutes.do(displayFile, FileName)

    while True:

        schedule.run_pending()

        time.sleep(1)

if __name__ == "__main__":
    main()