'''

Assignent 16 :

Q3) Write the lambda Function that accept two Number and reuturn Maximum Number

'''

Maximum = lambda No1, No2: No1 if No1 > No2 else No2

def main():
    No1, No2 = map(int, input("Enter two numbers: ").split())

    Result = Maximum(No1, No2)

    print("Maximum Number is:", Result)

if __name__ == "__main__":
    main()