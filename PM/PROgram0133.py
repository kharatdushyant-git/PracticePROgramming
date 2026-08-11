'''
Assignment 23

Q4) Write a program using multiprocessing.pool to calculate the do factorial form 1 to n number from given list

Input :

[100000, 200000, 300000, 400000]

Task :-
    for each number N, Calculate

   1 + 3 + 5 + 7+ 9 +.....N

EXcpeted output :-

    Process ID :- 1236
    Input NUmber :- 1000000
    sum of Even Number :- 500000


'''

import multiprocessing
import os

def Factorial(n):

    iFact = 1

    for i in range(1, n + 1):
        iFact *= i

    return (os.getpid(), n, iFact)


def main():

    No1 = int(input("Enter Frequency of the List : "))

    Data = []

    for i in range(No1):
        value = int(input())
        Data.append(value)

    M = multiprocessing.Pool()

    mdata = M.map(Factorial, Data)

    M.close()
    M.join()

    for i in range(No1):
        print("-----------------------------------")
        print("Process ID :-", mdata[i][0])
        print("Input Number :-", mdata[i][1])
        print("Factorial of Number :-", mdata[i][2])
        print("-----------------------------------")


if __name__ == "__main__":
    main()