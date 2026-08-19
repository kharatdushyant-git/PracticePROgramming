'''
Assignment 30

Q1) Write a Python program that prints:

Jay Ganesh...

every two seconds.

Use:
schedule.every(2).seconds.do(...)

Expected Output:

Jay Ganesh...
Jay Ganesh...
Jay Ganesh...
'''

import schedule
import time

def Display():
    print("Jay Ganesh...")

def main():

    schedule.every(2).seconds.do(Display)

    while True:
        # its tell the schedular that run the task
        schedule.run_pending()

        # its pause the schedular 
        time.sleep(1)

if __name__ == "__main__":
    main()