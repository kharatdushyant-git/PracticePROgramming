'''

Q38) Write a lambda function using filter() which accepts a list of numbers and returns a list of odd numbers.\


'''

def main():

    Data = [1,2,3,4,5,6,7,8,9,10]

    Result = list(filter(lambda No : No % 2 != 0, Data))

    print(Result)

if __name__ == "__main__":
    main()