'''
Q7) why does th input() always returns string ?
    how can you covert it into another data type

'''
'''
Ans :=
    1) input() always returns string beacuase in python user input treated as string
    2) we can convert input into our required data type using type casting
        input() = str
        int(input()) = int

'''
def main():
    print("Enter the First number No1 : ",end="")
    No1 = input()

    print("Enter the First number No2 : ",end="")
    No2 = input()

    print(type(No1))
    print(type(No2))

    print("Enter the First number X : ",end="")
    X = int(input())

    print("Enter the First number Y : ",end="")
    Y = int(input())   

    print(type(X))     
    print(type(Y))   

if __name__ == "__main__":
    main()     
