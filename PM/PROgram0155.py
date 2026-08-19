'''
Assignment 30

Q6) Write a script that schedules the following tasks:

1. Print "Lunch Time!" every day at 1:00 PM.

2. Print "Wrap up work" every day at 6:00 PM.

Both tasks should be handled by separate functions.
'''

import schedule
import time

def Lunch():

    print("Lunch Time!")

def Work():

    print("Warp up Work")

def main():

    schedule.every().day.at("13:00").do(Lunch)
    schedule.every().day.at("18:00").do(Work)

    while True:
        schedule.run_pending()

        time.sleep(1)

if __name__ == "__main__":
    main()