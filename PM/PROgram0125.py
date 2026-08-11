'''
Assignment 22

Q1) Write a program that accepts a list of integers and uses
Pool.map() to calculate the sum of squares from 1 to N for
every element in the list.

Example Input :

[1000000, 2000000, 3000000, 4000000]

Expected Output :

[
333333833333500000,
2666668666667000000,
...
]

'''

'''
Assignment 22

Q1) Write a program that accepts a list of integers and uses
Pool.map() to calculate the sum of squares from 1 to N for
every element in the list.

Example Input :

[1000000, 2000000, 3000000, 4000000]

Expected Output :

[
333333833333500000,
2666668666667000000,
9000004500000500000,
21333341333334000000
]

'''

from multiprocessing import Pool

def SumSquare(No):

    Sum = 0

    for i in range(1, No + 1):
        Sum = Sum + (i * i)

    return Sum


def main():

    Arr = [1000000, 2000000, 3000000, 4000000]

    P = Pool()

    Result = P.map(SumSquare, Arr)

    P.close()
    P.join()

    print(Result)


if __name__ == "__main__":
    main()
    