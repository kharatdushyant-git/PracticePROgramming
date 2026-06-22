'''

Q37) What is the Boolean data type in Python?
      List all values that evaluate to False.

'''

'''
Ans :-

    Boolean is a data type that represents logical values.

    It has only two values:

        True
        False

    Values that evaluate to False are:

        False
        None
        0
        0.0
        ''
        ""
        []
        ()
        {}
        set()

    All other values generally evaluate to True.

'''

def main():

    Values = [False, None, 0, 0.0, '', "", [], (), {}, set()]

    print("Values that evaluate to False:\n")

    for value in Values:
        print(value, "->", bool(value))

if __name__ == "__main__":
    main()