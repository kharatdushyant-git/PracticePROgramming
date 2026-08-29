'''
Assignment 31

Q5) Write a program that accepts a directory name from the user
and counts the number of files inside it every five minutes.

Write the result into:

DirectoryCountLog.txt

Each entry should contain:

1. Directory path
2. Number of files
3. Date and time
'''

import schedule
import time
import os
from datetime import datetime

def CreateLogFile(Directory):

    X = datetime.now()

    Count = 0

    Data = os.listdir(Directory)

    for item in Data:

        Path = os.path.join(Directory, item)

        if os.path.isfile(Path):

            Count += 1


    LogFile = open("DirectoryLog.txt", "a")

    LogFile.write(f"Log File Created Succesfully...\n")

    LogFile.write(f"Directory Path is : {Directory}\n")

    LogFile.write(f"Number of file are : {Count}\n")

    LogFile.write(f"Creation Time : "
                  f"{X.strftime('%d-%m-%Y %I:%M:%S %p')}\n"
    )

    LogFile.write("-----------------------------------\n")

    LogFile.close()

    print("Directory scanned successfully")
    print("Number of Files :", Count)

def main():

    Directory = input("Enter the Direcctory name")

    schedule.every(5).minutes.do(CreateLogFile, Directory)

    while True :

        schedule.run_pending()

        time.sleep(1)

if __name__ == "__main__":
    main()