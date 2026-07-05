'''

Q29) Write a lambda function which accepts two numbers and returns minimum number.

'''

def main():

    Minimum = lambda A, B : A if A < B else B

    Value1 = int(input("Enter first number : "))
    Value2 = int(input("Enter second number : "))

    Ret = Minimum(Value1, Value2)

    print("Minimum number is :", Ret)

if __name__ == "__main__":
    main()