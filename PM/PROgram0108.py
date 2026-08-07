'''
Assignment 18

Q3) Write a program which accepts N numbers from user and stores
them into List. Return Minimum number from that List.

Input :
Number of elements : 4
Input Elements : 13 5 45 7

Output : 5

'''


def Addition(Data):

    Max = Data[0]

    for No in Data:
        if(No < Max):
            Max = No

    return Max


def main():

    Size = int(input("Enter number of elements : "))

    List = []

    print("Enter the elements :")

    for i in range(Size):
        No = int(input())

        List.append(No)

    Ret = Addition(List)

    print("Smallest elements is :", Ret)


if __name__ == "__main__":
    main()