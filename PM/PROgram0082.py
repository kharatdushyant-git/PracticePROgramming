'''

Q42) Write a lambda function using filter() which accepts a list of strings and returns a list of strings having length greater than 5.

'''

def main():

    Data = ["Marvellous","Python","C","Java","Machine","ML"]

    Result = list(filter(lambda Str : len(Str) > 5, Data))

    print(Result)

if __name__ == "__main__":
    main()