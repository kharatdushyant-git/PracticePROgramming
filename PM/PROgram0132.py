'''
Assignment 23

Q4) Write a program using multiprocessing.pool to calculate the Count of all ODD number form 1 to n number from given  list

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

def CountOdd(n):

    sum = 0
    iCount = 0

    for i in range(0, n + 1):
        if i % 2 != 0 and i != 0:
            sum = sum + i
            iCount += 1

    return (os.getpid(), n, iCount)


def main():

    No1 = int(input("Enter Frequency of the List : "))

    Data = []

    for i in range(No1):
        value = int(input())
        Data.append(value)

    M = multiprocessing.Pool()

    mdata = M.map(CountOdd, Data)

    M.close()
    M.join()

    for i in range(No1):
        print("-----------------------------------")
        print("Process ID :-", mdata[i][0])
        print("Input Number :-", mdata[i][1])
        print("Count of Odd Number :-", mdata[i][2])
        print("-----------------------------------")


if __name__ == "__main__":
    main()