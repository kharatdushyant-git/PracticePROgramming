'''
Assignment 19

Q2) Write a program which contains one lambda function which accepts
two parameters and returns its multiplication.

Input : 4 3
Output : 12

Input : 6 3
Output : 18

'''

Multiply = lambda No1,No2 : No1 * No2

def main():

    Value1 = int(input("Enter first number : "))
    Value2 = int(input("Enter second number : "))

    Ret = Multiply(Value1,Value2)

    print("Output :",Ret)

if __name__ == "__main__":
    main()