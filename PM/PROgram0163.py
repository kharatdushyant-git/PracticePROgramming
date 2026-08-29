'''
Assignment 31

Q6) Write a program that schedules the following messages:

1. Monday at 9:00 AM:
   Start your weekly goals

2. Wednesday at 5:00 PM:
   Review your weekly progress

3. Friday at 6:00 PM:
   Weekly work completed

Use the schedule module.
''' 

import schedule
import time

def Mondaytask():

    print("Start your Weekly Goals")

def Wednesdaydaytask():

    print("Review Your Weekly Progress")

def Fridaytask():

    print("Weekly Work Completed")

def main():

    schedule.every().monday.at("9:00").do(Mondaytask)
    schedule.every().wednesday.at("17:00").do(Wednesdaytask)
    schedule.every().friday.at("18:00").do(Fridaytask)

    while True:

        schedule.run_pending()

        time.sleep(1)

if __name__ == "__main__":
    main()