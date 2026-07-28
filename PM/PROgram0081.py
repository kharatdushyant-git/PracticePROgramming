'''

Assignent 15 :

Q6) Write the reduce() and returns the sumation Minimum element

'''
from functools import reduce

def CheckMini(No1 , No2):
    if(No1 < No2):
        return No1
    else:
        return No2    

def main():
    Data = [13,12,8,10,11,20]

    print("Input data is : ",Data)

    RData = reduce(CheckMini,Data)

    print("Data after Reduce : ",RData)

if __name__ == "__main__":
    main()