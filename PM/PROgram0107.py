'''
Assignment 18

Q2) Write a program which accepts N numbers from user and stores
them into List. Return Maximum number from that List.

Input :
Number of elements : 7
Input Elements : 13 5 45 7 4 56 34

Output : 56

'''

def Addition(Data):

    Max = Data[0]

    for No in Data:
        if(No > Max):
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

    print("largest elements is :", Ret)


if __name__ == "__main__":
    main()