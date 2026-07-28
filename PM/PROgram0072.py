'''

Assignent 14 :

Q7) Write the lambda Function that accept one Number and print whther is it divvisible by 5 or not
'''

CheckEeven = lambda No1 : True if No1 % 5 == 0 else False

def main():
    No1 = int(input("Enter the Number : "))

    Result = CheckEeven(No1)

    if Result:
        print("The Number is Divisible by 5")
    else:
        print("The number is <<<Not>>> divisible by 5")    

if __name__ == "__main__":
    main()