'''

Assigment 27

Q3) Write a Python program to implement a class named Numbers with the
following specifications:

The class should contain one instance variable:

Value

Define a constructor (__init__) that accepts a number from the user
and initializes Value.

Implement the following instance methods:

ChkPrime() - returns True if the number is prime, otherwise returns False.

ChkPerfect() - returns True if the number is perfect, otherwise returns False.

Factors() - displays all factors of the number.

SumFactors() - returns the sum of all factors.

Create multiple objects and call all methods.
'''

class Numbers:

    def __init__(self, Value):
        self.Value = Value

    def ChkPrime(self):

        if self.Value <= 1:
            return False

        for i in range(2, self.Value):
            if self.Value % i == 0:
                return False

        return True

    def ChkPerfect(self):

        iSum = 0

        for i in range(1, self.Value):
            if self.Value % i == 0:
                iSum = iSum + i

        return iSum == self.Value

    def Factors(self):

        print("Factors :-", end=" ")

        for i in range(1, self.Value + 1):
            if self.Value % i == 0:
                print(i, end=" ")

        print()

    def SumFactors(self):

        iSum = 0

        for i in range(1, self.Value + 1):
            if self.Value % i == 0:
                iSum = iSum + i

        return iSum


def main():

    Value = int(input("Enter Number : "))

    Obj1 = Numbers(Value)

    if Obj1.ChkPrime():
        print("Number is Prime")
    else:
        print("Number is Not Prime")

    if Obj1.ChkPerfect():
        print("Number is Perfect")
    else:
        print("Number is Not Perfect")

    Obj1.Factors()

    print("Sum of Factors :-", Obj1.SumFactors())


if __name__ == "__main__":
    main()