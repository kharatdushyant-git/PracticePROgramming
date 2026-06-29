'''

Q2) Write a PROgram that Accept the 2 Number from user And display the greater number

'''

def ChkGreater(iNo1, iNo2):
    if iNo1 > iNo2:
        print(iNo1," is Greater Number ")

    else:
        print(iNo2,"is Greater Number ")

def main():
    print("Enter the First Number : ")
    iValue1 = int(input())

    print("Enter the Second Number : ")
    iValue2 = int(input())

    ChkGreater(iValue1,iValue2)    

if __name__ == "__main__":
    main()        