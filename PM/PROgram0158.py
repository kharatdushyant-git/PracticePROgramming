'''
Assignment 31

Q1) Write a program that accepts:

1. A message from the user.
2. A time interval in seconds.

Schedule the program to display the message repeatedly
after the specified interval.

Validate that the interval is greater than zero.
'''

import schedule
import time

def Display(message):

    print(message)

def main():

    message = input("Enter the Message : ")
    interval = int(input("Enter the interval in seconds : "))

    if interval <= 0:

        print("invalid interval!!!")

    schedule.every(interval).seconds.do(Display, message)

    while True:

        schedule.run_pending()

        time.sleep(1)

if __name__ == "__main__":
    main()