'''

Q25) Predict the output:

    s = "Python"
    print(id(s))

    s = s + "3"
    print(id(s))

    Explain the reason for change/no change in id().

'''

'''
Ans :- out put 

        1st) print(id(s))

        will display the Address memory allocated to it

        2nd) print(id(s))
        will Display a new Address allocated to memory not the previous "s"
        Address which create new obj to that why memory address changes

'''   
def main():
    s = "Python"
    print(id(s))

    s = s + "3"
    print(id(s))

if __name__ == "__main__":
    main()    

# OutPut : 2643738230576
#          2643738775584      