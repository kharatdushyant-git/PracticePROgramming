'''
Assignment 17

Q5) Write a program which accepts one number from user and
checks whether that number is prime or not.

Input : 5
Output : It is Prime Number
'''
def Prime(No):

    if(No <= 1):
        return False

    for i in range(2,(No // 2) + 1):
        if(No % i == 0):
            retur False

    return True        

def main():
    Value = int(input("Enter the Number : "))

    if(Ret == True):
        print("It is Prime Number")
    else:
        print("It is Not Prime Number")

if __name__ == "__main__":
    main()