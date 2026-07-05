'''

Q39) Write a lambda function using reduce() which accepts a list of numbers and returns the addition of all elements.

'''

from functools import reduce

def main():

    Data = [10,20,30,40,50]

    Result = reduce(lambda A, B : A + B, Data)

    print(Result)

if __name__ == "__main__":
    main()