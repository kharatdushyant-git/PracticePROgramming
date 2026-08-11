'''

Assignment 26

Q3) Write a Python program to implement a class named Arithmetic with
the following characteristics:

The class should contain two instance variables Value1 and Value2.

Define a constructor (__init__) that initializes all instance
variables to 0.

Implement the following instance methods:

Accept() - accepts values for Value1 and Value2 from the user.

Addition() - returns the addition of Value1 and Value2.

Subtraction() - returns the subtraction of Value1 and Value2.

Multiplication() - returns the multiplication of Value1 and Value2.

Division() - returns the division of Value1 and Value2.
Handle division by zero properly.

Create multiple objects of the Arithmetic class and invoke all the
instance methods.
'''

class Arithmetic:

    def __init__(self):
        self.Value1 = 0
        self.Value2 = 0

    def Accept(self):
        self.Value1 = int(input("Enter First Number : "))
        self.Value2 = int(input("Enter Second Number : "))

    def Addition(self):
        return self.Value1 + self.Value2

    def Subtraction(self):
        return self.Value1 - self.Value2

    def Multiplication(self):
        return self.Value1 * self.Value2

    def Division(self):
        if self.Value2 == 0:
            return "Cannot divide by zero"

        return self.Value1 / self.Value2


def main():

    Obj1 = Arithmetic()
    Obj2 = Arithmetic()

    print("Enter details for Object 1")
    Obj1.Accept()

    print("Addition :-", Obj1.Addition())
    print("Subtraction :-", Obj1.Subtraction())
    print("Multiplication :-", Obj1.Multiplication())
    print("Division :-", Obj1.Division())

    print("-----------------------------------")

    print("Enter details for Object 2")
    Obj2.Accept()

    print("Addition :-", Obj2.Addition())
    print("Subtraction :-", Obj2.Subtraction())
    print("Multiplication :-", Obj2.Multiplication())
    print("Division :-", Obj2.Division())


if __name__ == "__main__":
    main()