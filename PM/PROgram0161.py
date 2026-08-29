'''
Assignment 31

Q4) Write a program that creates a new log file after every ten minutes.

The filename should contain the current date and time.

Example:

MarvellousLog_25_07_2026_16_30_00.txt

The file should contain:

Log file created successfully.
Creation Time: 25-07-2026 04:30:00 PM
'''
import schedule
import time
from datetime import datetime

def CreateLogFile():

    X = datetime.now()

    FileName = "MarvellousLog_" + X.strftime("%d_%m_%Y_%H_%M_%S") + ".txt"

    File = open(FileName, "w")

    File.write("Log File Created Succesfully...")

    File.write(f"Creation Time : "
               f"{X.strftime('%d-%m-%Y %I:%M:%S %p')}\n"
    )

    File.close()


    print("Log File Created Successfully with name as : ", FileName)

def main():

    schedule.every(10).minutes.do(CreateLogFile)

    while True :

        schedule.run_pending()

        time.sleep(1)

if __name__ == "__main__":
    main()