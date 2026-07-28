'''
Assignment 17

Q4) Write a program which accepts one number from user and
returns addition of its factors.

Input : 12
Output : 16

(1 + 2 + 3 + 4 + 6 = 16)
'''

def Add(No):

    sum = 0

    for i in range(1,(No // 2) + 1):
        if (No % i == 0):
            sum += i

    return sum

def main():
    Value = int(input("Enter the Number : "))

    Ret = Add(Value)

    print("Addition of factors is : ",Ret)

if __name__ == "__main__":
    main()