'''
Assignment 23

Q3) Write a program using multiprocessing.pool to calculate the Count of all even number form 1 to n number from given  list

Input :

[100000, 200000, 300000, 400000]

Task :-
    for each number N, Calculate

   2 + 4 + 6 + 8 +.....N

EXcpeted output :-

    Process ID :- 1236
    Input NUmber :- 1000000
    sum of Even Number :- 500000


'''

import multiprocessing
import os

def CountEven(n):

    sum = 0
    iCount = 0

    for i in range(0, n + 1):
        if i % 2 == 0 and i != 0:
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

    mdata = M.map(CountEven, Data)

    M.close()
    M.join()

    for i in range(No1):
        print("-----------------------------------")
        print("Process ID :-", mdata[i][0])
        print("Input Number :-", mdata[i][1])
        print("Count of Even Number :-", mdata[i][2])
        print("-----------------------------------")


if __name__ == "__main__":
    main()