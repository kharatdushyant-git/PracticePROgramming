'''
Assignment 18

Q1) Write a program which accepts N numbers from user and stores
them into List. Return addition of all elements from that List.

Input :
Number of elements : 6
Input Elements : 13 5 45 7 4 56

Output : 130

'''

def Addition(Data):

    Sum = 0

    for Value in Data:
        Sum = Sum + Value

    return Sum


def main():

    Size = int(input("Enter number of elements : "))

    List = []

    print("Enter the elements :")

    for i in range(Size):
        No = int(input())

        List.append(No)

    Ret = Addition(List)

    print("Addition of all elements is :", Ret)


if __name__ == "__main__":
    main()