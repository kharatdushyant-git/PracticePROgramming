'''

Q11) Write a PROgram that print whther the number is Prime or Not

'''

def Prime(No):

    for i in range(1, No + 1):
        if(No % i == 0):
            return True
        else:
            return False    

def main():
    Value = int(input("Enter the First Input : "))

    Ret = Prime(Value)

    if(Ret == True):
        print("Prime Number")
    else:
        print("Not a Prime Number")    

if __name__ == "__main__":
    main()