'''

Q12) Write a program that prints the count of digits

'''

def Count(No):
    Count = 0

    while(No != 0):
        Count += 1
        No = No // 10

    print("Count of Digits is :", Count)

def main():
    Value = int(input("Enter the Number : "))
    Count(Value)

if __name__ == "__main__":
    main()