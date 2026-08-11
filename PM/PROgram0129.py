'''
Assignment 23

Q1) Write a program using multiprocessing.pool to calculate the sum of all even number form 1 to n number from given  list

Input :

[100000, 200000, 300000, 400000]

Task :-
    for each number N, Calculate

    2 + 4 + 6 + 8 +.....N

EXcpeted output :-

    Process ID :- 
    Input NUmber :-
    sum of Even Number :-


'''

import multiprocessing
import os

def SumEven(n):

    sum = 0

    for i in range(0, n + 1):
        if i % 2 == 0:
            sum = sum + i

    return (os.getpid(), n, sum)


def main():

    No1 = int(input("Enter Frequency of the List : "))

    Data = []

    for i in range(No1):
        value = int(input())
        Data.append(value)

    M = multiprocessing.Pool()

    mdata = M.map(SumEven, Data)

    M.close()
    M.join()

    for i in range(No1):
        print("-----------------------------------")
        print("Process ID :-", mdata[i][0])
        print("Input Number :-", mdata[i][1])
        print("Sum of Even Number :-", mdata[i][2])
        print("-----------------------------------")


if __name__ == "__main__":
    main()