'''
Assignment 17

Q10) Write a program which accepts one number from user and
returns addition of digits in that number.

Input : 5187934
Output : 37
'''

def Digit(No1):

    if(No1 < 0):
        No1 = -No1

    if(No1 == 0):
        return 1

    Digit = 0
    Sum = 0

    while(No1 != 0):
        Digit = No1 % 10
        Sum += Digit
        No1 = No1 // 10

    return Sum


def main():
    Value = int(input("Enter the Number : "))

    Ret = Digit(Value)

    print("Addition of Digit's of Given number is : ", Ret)  

if __name__ == "__main__":
    main()      