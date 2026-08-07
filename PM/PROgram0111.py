'''
Assignment 19

Q1) Write a program which contains one lambda function which accepts
one parameter and returns power of two.

Input : 4
Output : 16

Input : 6
Output : 64

'''

Power = lambda No : No ** 2

def main():

    Value = int(input("Enter number : "))

    Ret = Power(Value)

    print("Output :",Ret)

if __name__ == "__main__":
    main()