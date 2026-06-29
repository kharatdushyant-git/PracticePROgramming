'''

Q19) write a PROgram that Accept one integer and print the number till N

'''

def Number(No):

    print("Numer are : ")

    for i in range(1,No + 1):
        print(i,end= " ")

def main():
    Value = int(input("Enter the Number : "))

    Number(Value)

if __name__ == "__main__":
    main()    