'''
Assignment 32

Q1) Write a program that creates a new text file every minute.

The filename should contain the current timestamp.

Example:

File_25_07_2026_16_30_00.txt

Write the following information into the file:

1. Filename
2. Creation date
3. Creation time
'''

import schedule
import time
from datetime import datetime

def CreaeFile():

    X = datetime.now()

    FileName = "File" + X.strftime("%d_%m_%Y_%H_%M_%S") + ".txt"

    File = open(FileName, "w")

    File.write(f"File Name is : {FileName}\n")

    File.write(f"Creation Date : {X.strftime('%d-%m-%Y')}\n")

    File.write(f"Creation Time : {X.strftime('%I:%M:%S %p')}\n")

    File.close()

    print("File is Created Succesfully named as : ",FileName)

def main():

    schedule.every(1).minutes.do(CreaeFile)

    while True:

        schedule.run_pending()

        time.sleep(1)

if __name__ == "__main__":
    main()