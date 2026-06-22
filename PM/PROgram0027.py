'''

Q27) Predict the output:

    d = {1: "One", 1: "ONE", 2: "Two"}
    print(d)

    Why does this happen?

'''

'''
Ans :-

    Output:

        {1 : 'One', 2 : 'Two'}

        The key 1 appears twice in the dictionary.

        Dictionaries do not allow duplicate keys, so the second value
        "ONE" overwrites the first value "One".


'''

def main():
    d = {1 : "one", 1 : "ONE", 2 : "Two"}
    print(d)

if __name__ == "__main__":
    main()    
    
