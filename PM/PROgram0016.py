'''

Q16) wriet teh program that print 
    1) Data type 
    2) Memory Address
    3) Size in Bytes

    of Variable entered by user

'''
import sys

def main():
    Value = eval(input("Enter the Data type : "))

    print("Data Type is ",type(Value))
    print("Memory Address of Data Type is : ",id(Value))
    print("Size of Data type in bytes is : ",sys.getsizeof(Value))

if __name__ == "__main__":
    main()