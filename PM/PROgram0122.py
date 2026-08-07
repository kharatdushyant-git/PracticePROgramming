'''
Assignment 21

Q2) Design a Python application that creates two threads.

Thread1 should calculate and display the maximum element
from a list.

Thread2 should calculate and display the minimum element
from the same list.

The list should be accepted from the user.

'''

import threading

def Maximum(Data):

    Max = Data[0]

    for No in Data:
        if(No > Max):
            Max = No

    print("Maximum element is :", Max)


def Minimum(Data):

    Min = Data[0]

    for No in Data:
        if(No < Min):
            Min = No

    print("Minimum element is :", Min)


def main():

    Size = int(input("Enter number of elements : "))

    Arr = []

    print("Enter the elements :")

    for i in range(Size):
        Value = int(input())
        Arr.append(Value)

    T1 = threading.Thread(target = Maximum, args = (Arr,), name = "Thread1")
    T2 = threading.Thread(target = Minimum, args = (Arr,), name = "Thread2")

    T1.start()
    T2.start()

    T1.join()
    T2.join()

    print("Exit from main")


if __name__ == "__main__":
    main()