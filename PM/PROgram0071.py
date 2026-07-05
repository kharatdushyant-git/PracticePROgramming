'''

Q31) Write a lambda function which accepts one number and returns True if number is odd otherwise False.

'''

def main():

    Odd = lambda No : No % 2 != 0

    Value = int(input("Enter number : "))

    Ret = Odd(Value)

    print(Ret)

if __name__ == "__main__":
    main()