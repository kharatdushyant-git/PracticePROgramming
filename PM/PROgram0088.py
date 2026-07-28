'''
Assignment 16

Q3) Write a program which contains one function named as Add()
    which accepts two numbers from user and returns addition of 
    that two numbers.

    Input : 11 5
    Output : 16
    
'''
def Add(No1 , No2):
    return No1 + No2

def main():
    iValue1 = int(input("Enter the Number : "))
    iValue2 = int(input("Enter the Number : "))

    Ret = Add(iValue1 , iValue2) 

    print("Addition is : ", Ret)
    
if __name__ == "__main__":
    main()