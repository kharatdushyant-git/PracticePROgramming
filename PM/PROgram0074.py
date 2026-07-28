'''

Assignent 14 :

Q9) Write the lambda Function that accept two Number and retrun Multiplication of two number

'''

Mult = lambda No1,No2 : No1 * No2

def main():
    No1, No2 = map(int, input("Enter two numbers: ").split())

    Result = Mult(No1, No2)

    print("Multiplication of  Number is:", Result)

if __name__ == "__main__":
    main()