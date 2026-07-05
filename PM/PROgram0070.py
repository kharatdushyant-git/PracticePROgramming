'''

Q30) Write a lambda function which accepts one number and returns True if number is even otherwise False.

'''

def main():

    Even = lambda No : No % 2 == 0

    Value = int(input("Enter number : "))

    Ret = Even(Value)

    print(Ret)

if __name__ == "__main__":
    main()