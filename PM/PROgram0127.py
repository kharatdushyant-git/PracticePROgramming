'''
Assignment 22

Q3) Write a program that accepts a list of integers and uses
multiprocessing.Pool to calculate the sum of fifth powers
from 1 to N for each number.

Input :

[100000, 200000, 300000, 400000]

Output :

Display the sum of fifth powers for each number.

'''

from multiprocessing import Pool

def SumPower5(No):

    Sum = 0

    for i in range(1, No + 1):
        Sum = Sum + (i ** 5)

    return Sum


def main():

    Arr = [100000, 200000, 300000, 400000]

    P = Pool()

    Result = P.map(SumPower5, Arr)

    P.close()
    P.join()

    print(Result)


if __name__ == "__main__":
    main()