'''

Q33) Write a lambda function which accepts two numbers and returns addition.

'''

def main():

    Addition = lambda A, B : A + B

    Value1 = int(input("Enter first number : "))
    Value2 = int(input("Enter second number : "))

    Ret = Addition(Value1, Value2)

    print("Addition is :", Ret)

if __name__ == "__main__":
    main()