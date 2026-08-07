'''
Assignment 21

Q1) Design a Python application that creates two threads named
Prime and NonPrime.

Both threads should accept a list of integers.

The Prime thread should display all prime numbers from the list.

The NonPrime thread should display all non-prime numbers from the list.

'''
import threading

def ChkPrime(No):

    if(No <= 1):
        return False

    for i in range(2, No):
        if(No % i == 0):
            return False

    return True


def Prime(Data):

    print("Prime numbers are :")

    for No in Data:
        if(ChkPrime(No) == True):
            print(No)


def NonPrime(Data):

    print("Non Prime numbers are :")

    for No in Data:
        if(ChkPrime(No) == False):
            print(No)


def main():

    Size = int(input("Enter number of elements : "))

    Arr = []

    print("Enter the elements :")

    for i in range(Size):
        Value = int(input())
        Arr.append(Value)

    T1 = threading.Thread(target = Prime, args = (Arr,), name = "Prime")
    T2 = threading.Thread(target = NonPrime, args = (Arr,), name = "NonPrime")

    T1.start()
    T2.start()

    T1.join()
    T2.join()

    print("Exit from main")


if __name__ == "__main__":
    main()