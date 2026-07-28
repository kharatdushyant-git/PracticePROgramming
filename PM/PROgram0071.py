'''

Assignent 14 :

Q6) Write the lambda Function that accept one Number and return True if the number is odd Flase for even 

'''

CheckEeven = lambda No1 : True if No1 % 2 == 1 else False

def main():
    No1 = int(input("Enter the Number : "))

    Result = CheckEeven(No1)

    print(Result)

if __name__ == "__main__":
    main()