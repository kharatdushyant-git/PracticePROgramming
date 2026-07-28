'''

Assignent 15 :

Q2) Write the filter() Function that accept list and return the list of even number

'''
def CheckEven(No):
    return (No % 2 == 0)

def main():
    Data = [13,12,8,10,11,20]

    print("Input data is : ",Data)

    FData = list(filter(CheckEven,Data))

    print("Data after filter : ",FData)

    
if __name__ == "__main__":
    main()