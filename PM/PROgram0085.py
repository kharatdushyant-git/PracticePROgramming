'''

Q45) Write a lambda function using filter() which accepts a list of numbers and returns the count of even numbers.

'''

def main():

    Data = [10,11,12,13,14,15,16,17,18]

    Result = list(filter(lambda No : No % 2 == 0, Data))

    print("Count of even numbers is :", len(Result))

if __name__ == "__main__":
    main()