'''

Q40) Write a lambda function using reduce() which accepts a list of numbers and returns the maximum element.

'''

from functools import reduce

def main():

    Data = [10,50,30,70,20]

    Result = reduce(lambda A, B : A if A > B else B, Data)

    print(Result)

if __name__ == "__main__":
    main()