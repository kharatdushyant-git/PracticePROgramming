'''
Assignment 17

Q1) Create one module named as Arithmetic which contains four
    functions as Add() for addition, Sub() for subtraction,
    Mult() for multiplication and Div() for division.

    All functions accept two parameters as numbers and perform
    the operation. Write one Python program which calls all the
    functions from the Arithmetic module by accepting the
    parameters from user.

'''
import Arithmetic

def main():
    Value1 = int(input("Enter first number : "))
    Value2 = int(input("Enter second number : "))

    print("Addition is :", Arithmetic.Add(Value1, Value2))
    print("Subtraction is :", Arithmetic.Sub(Value1, Value2))
    print("Multiplication is :", Arithmetic.Mult(Value1, Value2))
    print("Division is :", Arithmetic.Div(Value1, Value2))

if __name__ == "__main__":
    main()