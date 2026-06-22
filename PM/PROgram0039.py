'''

Q39) Predict the output:

    s = {10, 20, 30, 10, 20}
    print(s)

    Why are some values missing?

'''

'''
Ans :-

    Output:

        {10, 20, 30}

    Sets store only unique elements.

    Duplicate values are automatically removed, therefore
    10 and 20 appear only once in the output.

'''

def main():

    Data = {10, 20, 30, 10, 20}

    print("Set elements are :")
    print(Data)

if __name__ == "__main__":
    main()