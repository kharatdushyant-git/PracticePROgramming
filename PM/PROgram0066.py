'''

Q26) Write a lambda function which accepts one number and returns square of that number.

'''

def main():

    Square = lambda No : No * No

    Value = int(input("Enter number : "))

    Ret = Square(Value)

    print("Square is :", Ret)

if __name__ == "__main__":
    main()