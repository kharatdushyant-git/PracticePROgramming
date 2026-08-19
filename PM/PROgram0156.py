'''
Assignment 30

Q7) Write a Python program that performs a file backup every hour.

The program should:

1. Accept the source file path.

2. Accept the destination directory path.

3. Copy the source file to the destination directory.

4. Add the current date and time to the backup filename.

5. Write the backup operation details into:

backup_log.txt

Example backup filename:

Data_25_07_2026_16_30_00.txt

Example log entry:

Backup completed successfully at 25-07-2026 04:30:00 PM

Use the shutil module for file copying.
'''

import schedule
import time
import os
from datetime import datetime

def Backup(SourceFile, DestinationDirectory):

    X = datetime.now()

    # this method give us only the entered file name 
    FileName = os.path.basename(SourceFile)

    # to get the source file name and extention seperatly we have method name as slittext

    Name, Extension = os.path.splitext(FileName)

    NewFileName = Name + "_" + X.strftime("%d_%m_%Y_%H_%M_%S") + Extension

    # This method is used to join the 
    #   DestinationDirectory = Backup
    #   NewFileName = Demo_19_08_2026_14_30_45.txt

    DestinationFile = os.path.join(DestinationDirectory, NewFileName)

    #   Backup/Demo_19_08_2026_14_30_45.txt


    # Copying the content of sourcefile into Destinationfile

    Source = open(SourceFile, "r")
    Destination = open(DestinationFile, "w")

    Data = Source.read()

    Destination.write(Data)

    Source.close()
    Destination.close()

    # reate the log file for it     

    LogFile = open("Backup_Log_File.txt","a")

    LogFile.write(
        f"Backup completed successfully at "
        f"{X.strftime('%d-%m-%Y %I:%M:%S %p')}\n"
    )

    LogFile.close()

    print("Backup completed successfully")
    print("Backup File :", DestinationFile)

def main():

    SourceFile = input("Enter the File Name : ")
    DestinationDirectory = input("Enter the Destination Path : ")

    schedule.every(1).hour.do(Backup, SourceFile, DestinationDirectory)

    while True:

        schedule.run_pending()

        time.sleep(1)

if __name__ == "__main__":
    main()

