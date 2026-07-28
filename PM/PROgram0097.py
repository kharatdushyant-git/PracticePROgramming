'''
Assignment 17

Q2) Write a program which accepts one number and displays
the following pattern.

Inpt : 5

    Output :
    * * * * *
    * * * * *
    * * * * *
    * * * * *
    * * * * *
'''
def Pattern(No1):

    for i in range(1,No1+1):
        for j in range(1,No1+1):
            print("* ", end="")

        print("\n")

def main():
    Value1 = int(input("Enter the Number of Row and Column : "))
    Pattern(Value1)

if __name__ == "__main__":
    main()        