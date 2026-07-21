'''

Assignent 16 :

Q2) Write the lambda Function that accept one Number and reuturn cube of Number

'''

cube = lambda No1 : No1 * No1 * No1

def main():
    No = int(input("Enter the Number : "))

    Ret = cube(No)

    print("Cube of number is : ",Ret)

if __name__ == "__main__":
    main()