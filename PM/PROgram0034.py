'''

Q34) Predict the output:

    ba = bytearray([65, 66, 67])
    ba[0] = 97
    print(ba)

    Why is this allowed?

'''

'''
Ans :-

    Output:

        bytearray(b'aBC')

    This is allowed because bytearray is mutable.

    The value 97 represents the character 'a', so the first
    element is successfully modified.

'''

def main():
    ba = bytearray([65,66,67])
    ba[0] = 97

    print(ba)

if __name__ =="__main__":
    main()    