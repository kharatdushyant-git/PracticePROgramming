'''

Q40) What is dynamic typing in Python?

'''

'''
Ans :-

    Python is a dynamically typed language, which means
    the data type of a variable is determined automatically
    at runtime.

    The programmer does not need to declare the type explicitly.

    A variable can store values of different types during execution.

    Example:

        x = 10
        x = "Python"

'''

def main():
    x = 10
    print(x)
    print(type(x))

    x = 90.99
    print(x)
    print(type(x))

    x = "Python"
    print(x)
    print(type(x))

if __name__ =="__main__":
    main()    