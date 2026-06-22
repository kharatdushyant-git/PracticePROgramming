'''
Q11)What is the User Defined Function ?
    Write a Function to Accept teo number ad reurn their Multiplication

'''

def Multiplication(No1 , No2):   # userdefined function 
    Ans = No1 * No2

    return Ans

def main():
    Value1 = int(input("Enter the First Number : "))
    Value2 = int(input("Enter the First Number : "))

    Ret = Multiplication(Value1, Value2)

    print("Multiplation of Given two number is : ", Ret)  # print() is built in function

if __name__ == "__main__":
    main()