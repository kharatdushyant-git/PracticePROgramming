'''

Q8) Write a PROgram that print Factorial of Number

'''

def Factorial(No):
    Ans = 1

    for i in range(1, No + 1):
        Ans = Ans * i

    print("Factorial is : ",Ans)

def main():
    Value = int(input("Enter the First Input : "))

    Factorial(Value)

if __name__ == "__main__":
    main()