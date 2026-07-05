'''

Q32) Write a lambda function which accepts one number and returns True if divisible by 5.

'''

def main():

    Divisible = lambda No : No % 5 == 0

    Value = int(input("Enter number : "))

    Ret = Divisible(Value)

    print(Ret)

if __name__ == "__main__":
    main()