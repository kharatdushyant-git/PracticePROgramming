'''

Q35) Write a lambda function which accepts three numbers and returns largest number.

'''

def main():

    Largest = lambda A, B, C : A if (A >= B and A >= C) else (B if B >= C else C)

    Value1 = int(input("Enter first number : "))
    Value2 = int(input("Enter second number : "))
    Value3 = int(input("Enter third number : "))

    Ret = Largest(Value1, Value2, Value3)

    print("Largest number is :", Ret)

if __name__ == "__main__":
    main()