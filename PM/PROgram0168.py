'''
Assignment 32

Q4) Write a program that copies all .txt files from one directory
to another every ten minutes.

The program should:

1. Accept source and destination directories.
2. Validate both directories.
3. Copy only .txt files.
4. Maintain a log of copied files.
5. Avoid terminating if one file cannot be copied.
'''

import schedule
import time
import os

def CopyDirectory(SourceDirectory, DestinationDirectory):

    if not os.path.isdir(SourceDirectory):
        print("Source directory does not exists...")
        return

    if not os.path.isdir(DestinationDirectory):
        print("destination directory does not exists...")
        return

    Data = os.listdir(SourceDirectory)

    for item in Data:

        if item.endswith(".txt"):

            SourceFiles = os.path.join(SourceDirectory, item)

            DestinationFiles = os.path.join(DestinationDirectory, item)

            try : 

                Source = open(SourceFiles,"r")
                Destination = open(DestinationFiles,"w")

                DataX = Source.read()

                Destination.write(DataX)

                Source.close()

                Destination.close()

                LogFile = open("CopyLog.txt","a")

                LogFile.write(f"Files Copied Succesfully...: {item}\n")

                LogFile.close()

                print("File Copied Succesfully : ",item)

            except Exception:

                print("Unable to copy Files : ",item)

    

def main():

    SourceDirectory = input("Enter the Source Directory : ")
    DestinationDirectory = input("Enter the Destination Directory : ")

    schedule.every(10).minutes.do(CopyDirectory, SourceDirectory, DestinationDirectory)

    while True :

        schedule.run_pending()

        time.sleep(1)
        
if __name__ == "__main__":
    main()