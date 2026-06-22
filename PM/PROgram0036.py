'''

Q36) Predict the output:

    x = None

    print(type(x))
    print(x == False)

    Explain the result.

'''

'''
Ans :-

    Output :-
        
        <class 'NoneType'>
        False

    None belongs to the NoneType class.

    None and False are different objects, therefore
    the comparison returns False.
'''

def main():
    x = None

    print(type(x))
    print(x == False)

if __name__ =="__main__":
    main()    