'''

Assignent 14 :

Q8) Write the lambda Function that accept two Number and retrun Addition of two number

'''

Add = lambda No1,No2 : No1 + No2

def main():
    No1, No2 = map(int, input("Enter two numbers: ").split())

    Result = Add(No1, No2)

    print("Addition of  Number is:", Result)

if __name__ == "__main__":
    main()