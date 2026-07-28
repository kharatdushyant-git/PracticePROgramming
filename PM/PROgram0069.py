'''

Assignent 14 :

Q4) Write the lambda Function that accept two Number and ruturn Minimum Number

'''

Minimum = lambda No1,No2 : No2 if No1 > No2 else No1

def main():
    No1, No2 = map(int, input("Enter two numbers: ").split())

    Result = Minimum(No1, No2)

    print("Minimum Number is:", Result)

if __name__ == "__main__":
    main()