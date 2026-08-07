'''
Assignment 18

Q5) Write a program which accepts N numbers from user and stores
them into List. Return addition of all prime numbers from that List.

Input :
Number of elements : 11
Input Elements : 13 5 45 7 4 56 10 34 2 5 8

Output : 32

'''

def ChkPrime(No):

    if(No <= 1):
        return False

    for i in range(2, No):
        if(No % i == 0):
            return False

    return True


def ListPrime(Data):

    Sum = 0

    for Value in Data:
        if(ChkPrime(Value) == True):
            Sum = Sum + Value

    return Sum


def main():

    Size = int(input("Enter number of elements : "))

    Arr = []

    print("Enter the elements :")

    for i in range(Size):
        No = int(input())
        Arr.append(No)

    Ret = ListPrime(Arr)

    print("Addition of prime numbers is :", Ret)


if __name__ == "__main__":
    main()