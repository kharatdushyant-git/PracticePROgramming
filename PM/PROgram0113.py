'''
Assignment 19

Q3) Write a program which contains filter(), map() and reduce() in it.
Filter should filter out all such numbers which are greater than or
equal to 70 and less than or equal to 90.
Map function will increase each number by 10.
Reduce will return product of all that numbers.

Input List = [4,34,36,76,68,24,89,23,86,90,45,70]

List after filter = [76,89,86,90,70]
List after map = [86,99,96,100,80]

Output of reduce = 6538752000

'''

from functools import reduce

FilterX = lambda No : (No >= 70) and (No <= 90)
MapX = lambda No : No + 10
ReduceX = lambda A,B : A * B

def main():

    Data = [4,34,36,76,68,24,89,23,86,90,45,70]

    FData = list(filter(FilterX,Data))
    print("List after filter :",FData)

    MData = list(map(MapX,FData))
    print("List after map :",MData)

    Ret = reduce(ReduceX,MData)
    print("Output of reduce :",Ret)

if __name__ == "__main__":
    main()