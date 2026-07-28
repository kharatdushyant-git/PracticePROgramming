'''
Assignment 17

Q3) Write a program which accepts one number from user and
    returns its factorial.

    Input : 5
    Output : 120
'''
def factorial(No):

    fact = 1

    for i in range(No,1,-1):

        fact *= i

    return fact    

def main():
    Value1 = int(input("ENter the Number : "))

    Ret = factorial(Value1)

    print("factorial of Number is : ",Ret)

if __name__ == "__main__":
    main()        