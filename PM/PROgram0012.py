'''

Q12) What if the Difference Between :
    1) Function with Parameters
    2) Function without Parameters

'''

'''
Ans := 1)Function with parametr is such Function that need some value from caller or for getting called from the other 
         paramter are value that get passed to the Fucntion
       2)On the other hand Function without parameter does not required any paramter to be called  
'''
def Hello():
    print("Hello!!!")

def Multiplication(No1 , No2):
    Ans = No1 * No2

    return Ans

def main():
    Value1 = int(input("Enter the First Number : "))
    Value2 = int(input("Enter the First Number : "))

    Ret = Multiplication(Value1, Value2)

    print("Multiplation of Given two number is : ", Ret)

    Hello()

if __name__ == "__main__":
    main()

