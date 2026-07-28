'''

Assignent 15 :

Q3) Write the filter() Function that accept list and return the list of odd number

'''
def CheckOdd(No):
    return (No % 2 == 1)

def main():
    Data = [13,12,8,10,11,20]

    print("Input data is : ",Data)

    FData = list(filter(CheckOdd,Data))

    print("Data after filter : ",FData)

    
if __name__ == "__main__":
    main()  