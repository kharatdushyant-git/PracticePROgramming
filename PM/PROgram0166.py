'''
Assignment 32

Q2) Write a Python program that monitors the size of a specified
file every 30 seconds.

Write the following details into:

FileSizeLog.txt

1. File path
2. File size in bytes
3. Date and time

Handle the situation where the file does not exist.
'''
import schedule
import time
import os
from datetime import datetime

def CreaeFile(FileName):

    X = datetime.now()

    if os.path.exists(FileName):

        FileSize = os.path.getsize(FileName)

        LogFile = open("FileSizeLog.txt", "a")

        LogFile.write(f"File Path is : {FileName}\n")

        LogFile.write(f"File Size is : {FileSize} Bytes\n")

        LogFile.write(f"Creation Date : {X.strftime('%d-%m-%Y')}\n")

        LogFile.write(f"Creation Time : {X.strftime('%I:%M:%S %p')}\n")

        LogFile.write("-------------------------------------------\n")

        LogFile.close()

        print("File Size is : ",FileSize)

    else:

        print("File Does not Exists : ",FileName)

def main():

    FileName = input("Ente the FileName : ")

    schedule.every(30).seconds.do(CreaeFile,FileName)

    while True:

        schedule.run_pending()

        time.sleep(1)

if __name__ == "__main__":
    main()