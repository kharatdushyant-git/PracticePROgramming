'''
Assignment 16

Q6) Write a program which accepts one number from user and checks
    whether that number is positive, negative or zero.

    Input : 11
    Output : Positive Number

    Input : -8
    Output : Negative Number

    Input : 0
    Output : Zero

'''
def ChkInt(No):
    if(No > 1):
        print("Positive Number")
    elif(No < 0):
        print("Negative Number")
    else:
        print("Zero")

def main():
    Value = int(input("Enter the Number : "))

    Ret = ChkInt(Value)

if __name__ == "__main__":
    main()        