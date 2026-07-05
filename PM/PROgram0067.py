'''

Q27) Write a lambda function which accepts one number and returns cube of that number.

'''

def main():

    Cube = lambda No : No * No * No

    Value = int(input("Enter number : "))

    Ret = Cube(Value)

    print("Cube is :", Ret)

if __name__ == "__main__":
    main()