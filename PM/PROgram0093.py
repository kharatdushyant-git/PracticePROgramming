'''
Assignment 16

Q8) Write a program which accepts one number from user and prints
    that number of "*" on screen.

    Input : 5
    Output :
    * * * * *
'''
def main():
    No = 5

    for i in range(No,0,-1):
        print("* " , end = " ")

if __name__ == "__main__":
    main()        