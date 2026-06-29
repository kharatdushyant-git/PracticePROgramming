'''

Q13) Write a program that prints the Reverse of digits

'''

def Count(No):
    Count = 0
    Digit = 0

    while(No != 0):
        Digit = No % 10
        No = No // 10
        print(Digit, end=" ")

def main():
    Value = int(input("Enter the Number : "))
    Count(Value)

if __name__ == "__main__":
    main()