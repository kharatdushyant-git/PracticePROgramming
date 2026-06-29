'''

Q10) Write a PROgram that print all Odd Number till N

'''

def Odd(No):

    for i in range(1, No + 1):
        if(i % 2 != 0):
            print(i)

def main():
    Value = int(input("Enter the First Input : "))

    Odd(Value)

if __name__ == "__main__":
    main()