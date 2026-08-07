'''
Assignment 20

Q3) Design a Python application that creates two threads named
EvenList and OddList.

Both threads should accept a list of integers as input.

The EvenList thread should extract all even elements from the
list and calculate their sum.

The OddList thread should extract all odd elements from the
list and calculate their sum.

Threads should run concurrently.

'''

import threading

def EvenList(Data):

    Sum = 0

    print("Even elements are :")

    for No in Data:
        if(No % 2 == 0):
            print(No)
            Sum = Sum + No

    print("Sum of even elements is :", Sum)


def OddList(Data):

    Sum = 0

    print("Odd elements are :")

    for No in Data:
        if(No % 2 != 0):
            print(No)
            Sum = Sum + No

    print("Sum of odd elements is :", Sum)


def main():

    Size = int(input("Enter number of elements : "))

    Arr = []

    print("Enter the elements :")

    for i in range(Size):
        Value = int(input())
        Arr.append(Value)

    T1 = threading.Thread(target = EvenList, args = (Arr,), name = "EvenList")
    T2 = threading.Thread(target = OddList, args = (Arr,), name = "OddList")

    T1.start()
    T1.join()

    T2.start()
    T2.join()

    print("Exit from main")


if __name__ == "__main__":
    main()