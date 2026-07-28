'''
Assignment 16

Q7) Write a program which contains one function that accepts one
    number from user and returns True if number is divisible by 5,
    otherwise returns False.

    Input : 8
    Output : False

    Input : 25
    Output : True

'''

def ChkDiv(No):
    return (No % 5 == 0)

def main():
    Value = int(input("Enter the number : "))

    if(ChkDiv(Value) == True):
        print("Divisible by 5")
    else:
        print("<<<NOT>>> Divisible by 5")

if __name__ == "__main__":
    main()                