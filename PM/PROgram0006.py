'''
Q6) write program that accepts two number and and print 
    1)Addition
    2)Substraction
    3)Multiplication
    4)Division

'''
def Calculation(a,b):
    print("Additon is : ",a + b)
    print("Substraction is : ",a - b)
    print("Multiplication is : ",a * b)
    print("Division is : ",a / b)

def main():
    print("Enter the First number : ",end="")
    No1 = int(input())

    print("Enter the First number : ",end="")
    No2 = int(input())

    iRet = 0

    iRet = Calculation(No1,No2)

if __name__ == "__main__":
    main()    
