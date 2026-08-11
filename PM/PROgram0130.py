'''
Assignment 23

Q2) Write a program using multiprocessing.pool to calculate the sum of all ODD number form 1 to n number from given  list

Input :

[100000, 200000, 300000, 400000]

Task :-
    for each number N, Calculate

   1 + 3 + 5 + 7+ 9 +.....N

EXcpeted output :-

    Process ID :- 
    Input NUmber :-
    sum of Even Number :-


'''

import multiprocessing
import os

def SumOdd(n):

    sum = 0

    for i in range(0, n + 1):
        if i % 2 != 0:
            sum = sum + i

    return (os.getpid(), n, sum)


def main():

    No1 = int(input("Enter Frequency of the List : "))

    Data = []

    for i in range(No1):
        value = int(input())
        Data.append(value)

    M = multiprocessing.Pool()

    mdata = M.map(SumOdd, Data)

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