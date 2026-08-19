'''
Assignment 30

Q2) Write a Python program that displays the current date and time
after every one minute.

Use the datetime module.

Expected Output:

Current Date and Time: 25-07-2026 04:30:00 PM
'''

import schedule
import time
from datetime import datetime

def Display():

    X = datetime.now()

    print("Current time is : ", X.strftime("%d-%m-%Y %I:%M:%S %p"))

def main():

    schedule.every(1).minutes.do(Display)

    while True:

        schedule.run_pending()
        time.sleep(1)

if __name__ == "__main__":
    main()
