'''

Assignent 16 :

Q2) Write a PROgrm which contain one fucntion named as ChekNum(). that accept parameter as a number if number is even then 
    it should print Even Number otherwise Odd Number  

'''
def ChkNum(No):
    if(No % 2 == 0):
        return True
def main():
    iValue = int(input("Enter the Number : "))

    if(ChkNum(iValue)):
        print("Even Number")
    else:
        print("Odd Number")    
    
if __name__ == "__main__":
    main()