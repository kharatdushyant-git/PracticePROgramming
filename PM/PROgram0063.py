'''

Q23) Write a program that accepts one number and checks whether it is a perfect number or not

'''

def Perfect(No):
    Sum = 0

    for i in range(1, No):
        if(No % i == 0):
            Sum = Sum + i

    if(Sum == No):
        return True
    else:
        return False

def main():
    Value = int(input("Enter Number : "))

    Ret = Perfect(Value)

    if(Ret == True):
        print("Perfect Number")
    else:
        print("Not a Perfect Number")

if __name__ == "__main__":
    main()