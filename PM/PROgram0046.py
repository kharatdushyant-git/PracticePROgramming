'''

Q6) Write a PROgram that pritn multiplication table of number that taken from user

'''

def Table(No):
    
    for i in range(1,11):
        i = i * No
        print(i)
 
def main():
    Value = int(input("Enter the First Input : "))

    Table(Value)

if __name__ == "__main__":
    main()