'''

Q25) Write a program that accepts marks and displays grade

'''

def Grade(Marks):

    if(Marks >= 75):
        return "Distinction"

    elif(Marks >= 60):
        return "First Class"

    elif(Marks >= 50):
        return "Second Class"

    else:
        return "Fail"

def main():
    Value = float(input("Enter Marks : "))

    Ret = Grade(Value)

    print("Grade :", Ret)

if __name__ == "__main__":
    main()