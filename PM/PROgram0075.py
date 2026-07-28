'''

Assignent 14 :

Q10) Write the lambda Function that accept three Number and return Maximum Number

'''

Largest = lambda No1,No2,No3 : (
                                No1 if No1 > No2 and No1 > No3 
                                else No2 if No2 > No1 and No2 > No3 
                                else No3
                                )

def main():
    No1, No2, No3 = map(int, input("Enter two numbers: ").split())

    Result = Largest(No1, No2, No3)

    print("largest Number is:", Result)

if __name__ == "__main__":
    main()