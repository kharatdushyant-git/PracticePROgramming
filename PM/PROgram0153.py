'''
Assignment 30

Q4) Create a task that executes every day at 9:00 AM and prints:

Namaskar...

Use:

schedule.every().day.at("09:00").do(...)
'''
import schedule
import time

def Display():
    print("dar ughad baye dar ughad")

def main():

    schedule.every().day.at("9:00").do(Display)

    while True:
        # its tell the schedular that run the task
        schedule.run_pending()

        # its pause the schedular 
        time.sleep(1)

if __name__ == "__main__":
    main()