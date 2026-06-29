'''

Q18) write a PROgram that Accept two number and performe teh arithmatic operation 

'''

def Arithmatic(No1, No2):

    print("Addition of Given Two Number is : ",No1 + No2)
    print("Substration of Given Two Number is : ",No1 - No2)
    print("Multiplication of Given Two Number is : ",No1 * No2)
    print("Division of Given Two Number is : ",No1 / No2)

def main():
    Value1 = int(input("Enter the First Number : "))
    Value2 = int(input("Enter the Second Number : "))

    Arithmatic(Value1, Value2)

if __name__ == "__main__":
    main()    