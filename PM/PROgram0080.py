'''

Assignent 15 :

Q5) Write the reduce() and returns the sumation Maximum element

'''
from functools import reduce

def CheckMax(No1 , No2):
    if(No1 > No2):
        return No1
    else:
        return No2    

def main():
    Data = [13,12,8,10,11,20]

    print("Input data is : ",Data)

    RData = reduce(CheckMax,Data)

    print("Data after Reduce : ",RData)

if __name__ == "__main__":
    main()