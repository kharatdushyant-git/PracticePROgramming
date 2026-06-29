'''

Q7) Write a PROgram that print summation of N natural number

'''

def Sum(No):
    
    for i in range(1,11):
        Ans = i + No

    print("Summamtion is : ",Ans)

def main():
    Value = int(input("Enter the First Input : "))

    Sum(Value)

if __name__ == "__main__":
    main()
