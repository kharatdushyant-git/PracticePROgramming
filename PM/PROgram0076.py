'''

Assignent 15 :

Q1) Write the map Function that accept list and return the square of list

'''
def Square(No):
    return (No * No)

def main():
    Data = [13,12,8,10,11,20]

    print("Input data is : ",Data)

    MData = list(map(Square, Data))

    print("Data after map : ",MData)
    
if __name__ == "__main__":
    main()