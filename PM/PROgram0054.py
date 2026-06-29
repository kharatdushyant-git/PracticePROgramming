'''

Q14) Write a program that prints the sum of digits

'''

def Count(No):
    Count = 0
    Digit = 0
    sum = 0

    while(No != 0):
        Digit = No % 10
        sum = sum + Digit
        No = No // 10
    
    print("Summation of Digits is : ",sum)

def main():
    Value = int(input("Enter the Number : "))
    Count(Value)

if __name__ == "__main__":
    main()