'''
Assignment 16

Q5) Write a program which displays numbers from 10 to 1 on screen.

    Output :
    10 9 8 7 6 5 4 3 2 1

'''
def main():
    No = 10

    for i in range(No,0,-1):
        print(i , end = " ")

if __name__ == "__main__":
    main()        