'''
Assignment 17

Q9) Write a program which accepts one number from user and
returns the number of digits in that number.

Input : 5187934
Output : 7
'''
def Digit(No1):

    if(No1 < 0):
        No1 = -No1

    if(No1 == 0):
        return 1

    Count = 0

    while(No1 != 0):
        Count += 1
        No1 = No1 // 10

    return Count


def main():
    Value = int(input("Enter the Number : "))

    Ret = Digit(Value)

    print("Number of Digit in Given number are : ", Ret)  

if __name__ == "__main__":
    main()      