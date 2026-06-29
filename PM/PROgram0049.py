'''

Q9) Write a PROgram that print all Even Number till N

'''

def Even(No):

    for i in range(1, No + 1):
        if(i % 2 == 0):
            print(i)

def main():
    Value = int(input("Enter the First Input : "))

    Even(Value)

if __name__ == "__main__":
    main()