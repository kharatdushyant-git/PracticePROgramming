'''

Assignent 16 :

Q1) Write the lambda Function that accept one Number and reuturn Square of Number

'''

Square = lambda No1 : No1 * No1

def main():
    No = int(input("Enter the Number : "))

    Ret = Square(No)

    print("Square of number is : ",Ret)

if __name__ == "__main__":
    main()