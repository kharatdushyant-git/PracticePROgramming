'''
Assignment 20

Q2) Design a Python application that creates two threads named
EvenFactor and OddFactor.

Both threads should accept one integer number as a parameter.

The EvenFactor thread should identify all even factors of the
given number and calculate their sum.

The OddFactor thread should identify all odd factors of the
given number and calculate their sum.

After both threads complete execution, the main thread should
display the message "Exit from main".

'''

import threading

def EvenFactor(No):

    Sum = 0

    print("Even factors are :")

    for i in range(1, No + 1):
        if((No % i == 0) and (i % 2 == 0)):
            print(i)
            Sum = Sum + i

    print("Sum of even factors is :", Sum)


def OddFactor(No):

    Sum = 0

    print("Odd factors are :")

    for i in range(1, No + 1):
        if((No % i == 0) and (i % 2 != 0)):
            print(i)
            Sum = Sum + i

    print("Sum of odd factors is :", Sum)


def main():

    Value = int(input("Enter a number : "))

    T1 = threading.Thread(target = EvenFactor, args = (Value,), name = "EvenFactor")
    T2 = threading.Thread(target = OddFactor, args = (Value,), name = "OddFactor")

    T1.start()
    T1.join()

    T2.start()    
    T2.join()

    print("Exit from main")


if __name__ == "__main__":
    main()