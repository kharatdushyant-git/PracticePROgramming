'''

Q30) What is the difference between:

        range(1, 10)
        range(1, 10, 2)

      Explain the parameters.

'''

'''
Ans :-

    range(1, 10) generates numbers from 1 to 9 with a default step size of 1.

    Output:
        [1, 2, 3, 4, 5, 6, 7, 8, 9]

    range(1, 10, 2) generates numbers from 1 to 9 with a step size of 2.

    Output:
        [1, 3, 5, 7, 9]

    Parameters:

    1) Start : Specifies the starting value.
    2) End : Specifies the ending value (not included).
    3) Jump  : Specifies the increment/decrement between values.

'''

def main():
    r = range(1,10)
    for no in r:
        print(no)
    print(r)

    r = range(1,10,2)
    for no in r:
        print(no)
    print(r)
   

if __name__ == "__main__":
    main()    