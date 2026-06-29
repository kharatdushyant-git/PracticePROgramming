'''

Q20) write a PROgram that Accept one integer and print the number till N in reverse

'''

def Number(No):

    print("Numer are : ")

    for i in range(No,0,-1):
        print(i,end= " ")

def main():
    Value = int(input("Enter the Number : "))

    Number(Value)

if __name__ == "__main__":
    main()    