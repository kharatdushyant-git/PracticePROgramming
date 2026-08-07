'''
Assignment 18

Q4) Write a program which accepts N numbers from user and stores
them into List. Accept one another number from user and return
frequency of that number from List.

Input :
Number of elements : 11
Input Elements : 13 5 45 7 4 56 5 34 2 5 65
Element to search : 5

Output : 3

'''

'''
Assignment 18

Q3) Write a program which accepts N numbers from user and stores
them into List. Return Minimum number from that List.

Input :
Number of elements : 4
Input Elements : 13 5 45 7

Output : 5

'''


def Addition(Data, No2):

    Count = 0

    for No in Data:
        if(No == No2):
            Count += 1

    return Count


def main():

    Size = int(input("Enter number of elements : "))
    No1 = int(input("Enter elements to find its frequency : "))

    List = []

    print("Enter the elements :")

    for i in range(Size):
        No = int(input())

        List.append(No)

    Ret = Addition(List,No1)

    print("Frequency of given elements is :", Ret)


if __name__ == "__main__":
    main()