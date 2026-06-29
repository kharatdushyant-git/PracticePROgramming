'''

Q17) write a PROgram that Accept one integer from user and prints its Factor

'''

def Factor(No):

    print("Factor of Given number are : ",end=" ")

    for i in range(1,No + 1):
        if(No % i == 0):
            print(i, end=" ")

def main():
    Value = int(input("Enter the Number : "))

    Factor(Value)

if __name__ == "__main__":
    main()    