'''

Assignent 15 :

Q4) Write the reduce() and returns the sumation of all number inside the list

'''
from functools import reduce

def CheckSum(No1 , No2):
    return (No1 + No2)

def main():
    Data = [13,12,8,10,11,20]

    print("Input data is : ",Data)

    RData = reduce(CheckSum,Data)

    print("Data after Reduce : ",RData)

if __name__ == "__main__":
    main()