'''
Assignment 30

Q3) Write a program that schedules a function to print:

Coding Kar..!

every 30 minutes.
'''
import schedule
import time

def Display():
    print("nig@ do the coding gng...")

def main():

    schedule.every(30).minutes.do(Display)

    while True:
        # its tell the schedular that run the task
        schedule.run_pending()

        # its pause the schedular 
        time.sleep(1)

if __name__ == "__main__":
    main()