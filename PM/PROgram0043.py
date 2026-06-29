'''

Q3) Write a PROgram that Print Square of number whch is Accepted from user

'''

def ChkSquare(iNo1):
    iAns = 0
    iAns = iNo1 * iNo1
    return iAns

def main():
    print("Enter the Number : ")
    iValue1 = int(input())

    iRet = ChkSquare(iValue1)

    print("Square of Given Number is : ",iRet)    

if __name__ == "__main__":
    main()        