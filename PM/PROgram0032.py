'''

Q32) Predict the output:

    b = bytes([65, 66, 67])
    print(b)

    Explain how numbers are converted internally.

'''

'''
Ans :-

    Output:

        b 'ABC'

    The values 65, 66, and 67 represent ASCII codes.

    Python converts these ASCII values into their corresponding
    characters A, B, and C and creates a bytes object.

'''

def main():
    b = bytes([65, 66, 67])
    print(b)

if __name__ == "__main__":
    main()    