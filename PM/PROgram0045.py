'''

Q5) Write a PROgram that Accept a Number from user And Check whether is it divisible by 3 And 5 or not1

'''

def ChkDivisible(iNo1):
    if(iNo1 % 3 == 0 and iNo1 % 5 == 0):
        print("The Number is Divisible By 3 & 5")
    else:
        print("The Number is <<<Not>>> Divisible By 3 & 5")

def main():
    print("Enter the Number : ")
    iValue1 = int(input())

    ChkDivisible(iValue1)   

if __name__ == "__main__":
    main()        