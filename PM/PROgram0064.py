'''

Q24) Write a program that accepts one number and prints binary equivalent

'''

def Binary(No):
    return bin(No)[2:]

def main():
    Value = int(input("Enter Number : "))

    Ret = Binary(Value)

    print("Binary Equivalent is :", Ret)

if __name__ == "__main__":
    main()