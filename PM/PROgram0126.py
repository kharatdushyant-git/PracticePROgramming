'''
Assignment 22

Q2) Write a program that calculates factorials of multiple
numbers simultaneously using Pool.map().

Input :

[10, 15, 20, 25]

Display :

Process ID
Input Number
Factorial

'''

from multiprocessing import Pool
import os

def Factorial(No):

    Fact = 1

    for i in range(1, No + 1):
        Fact = Fact * i

    print("Process ID :", os.getpid())
    print("Input Number :", No)
    print("Factorial :", Fact)
    print()

    return Fact


def main():

    Arr = [10, 15, 20, 25]

    P = Pool()

    P.map(Factorial, Arr)

    P.close()
    P.join()


if __name__ == "__main__":
    main()