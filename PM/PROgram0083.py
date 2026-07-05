'''

Q43) Write a lambda function using filter() which accepts a list of numbers and returns a list of numbers divisible by both 3 and 5.

'''

def main():

    Data = [10,15,20,30,45,50,60]

    Result = list(filter(lambda No : No % 3 == 0 and No % 5 == 0, Data))

    print(Result)

if __name__ == "__main__":
    main()