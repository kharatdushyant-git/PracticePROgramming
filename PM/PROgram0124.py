'''
Assignment 21

Q10) Design a Python application that creates two threads.

Thread1 should calculate the sum of all elements from a list.

Thread2 should calculate the product of all elements from the
same list.

Accept the list of integers from the user and display the
results using separate threads.

'''

import threading

def Sum(Data):

    Ans = 0

    for No in Data:
        Ans = Ans + No

    print("Sum of all elements is :", Ans)


def Product(Data):

    Ans = 1

    for No in Data:
        Ans = Ans * No

    print("Product of all elements is :", Ans)


def main():

    Size = int(input("Enter number of elements : "))

    Arr = []

    print("Enter the elements :")

    for i in range(Size):
        Value = int(input())
        Arr.append(Value)

    T1 = threading.Thread(target = Sum, args = (Arr,), name = "Thread1")
    T2 = threading.Thread(target = Product, args = (Arr,), name = "Thread2")

    T1.start()
    T2.start()

    T1.join()
    T2.join()

    print("Exit from main")


if __name__ == "__main__":
    main()