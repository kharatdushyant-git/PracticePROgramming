'''

Q15) Write a program that checks whether the given number is palindrome or not

'''

def Palindrome(No):
    Temp = No
    Rev = 0

    while(No != 0):
        Digit = No % 10
        Rev = (Rev * 10) + Digit
        No = No // 10

    if(Temp == Rev):
        return True
    else:
        return False

def main():
    Value = int(input("Enter the Number : "))

    Ret = Palindrome(Value)

    if(Ret == True):
        print("Palindrome Number")
    else:
        print("Not a Palindrome Number")

if __name__ == "__main__":
    main()