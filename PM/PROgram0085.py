'''

Assignent 15 :

Q10) Write the filter() Function that accept list of Number and return count of even number

'''
def Even(No):
    return (No % 2 == 0)    

def main():
    Data = [13,12,8,10,11,20, 15]

    print("Input data is : ",Data)

    FData = list(filter(Even,Data))

    print("Data after filter : ",FData)

    print("Count : ",len(FData))

    
if __name__ == "__main__":
    main()