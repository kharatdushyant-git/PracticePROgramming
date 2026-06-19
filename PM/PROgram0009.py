'''
Q9) write the program to take user name anad age & display 

    Hello <name>, you will turn <age + 1> next year.

'''

def main():
    print("Enter your Name : ")
    name = input()

    print("Enter your Age : ")
    Age = int(input())

    print("Hello!!!!",name,",Your age is ",Age,".")
    print(name,",You will turn ",Age + 1," next year.")

if __name__ == "__main__":
    main()    
