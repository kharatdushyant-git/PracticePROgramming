'''

Q44) Write a lambda function using reduce() which accepts a list of numbers and returns the product of all elements.

'''

from functools import reduce

def main():

    Data = [1,2,3,4,5]

    Result = reduce(lambda A, B : A * B, Data)

    print(Result)

if __name__ == "__main__":
    main()