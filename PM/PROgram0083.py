'''

Assignent 15 :

Q8) Write the filter() Function that accept list of Number and return number divisible by 3 and 5

'''
def Check35(No):
    return (No % 3 == 0 and No % 5 == 0)

def main():
    Data = [13,12,8,10,11,20, 15]

    print("Input data is : ",Data)

    FData = list(filter(Check35,Data))

    print("Data after filter : ",FData)

    
if __name__ == "__main__":
    main()