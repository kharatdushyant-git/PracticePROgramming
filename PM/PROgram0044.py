'''

Q4) Write a PROgram that Print Cube of number whch is Accepted from user

'''

def ChkCube(iNo1):
    iAns = 0
    iAns = iNo1 * iNo1 * iNo1
    return iAns

def main():
    print("Enter the Number : ")
    iValue1 = int(input())

    iRet = ChkCube(iValue1)

    print("Cube of Given Number is : ",iRet)    

if __name__ == "__main__":
    main()        