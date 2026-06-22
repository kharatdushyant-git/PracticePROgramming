'''

Q29) Predict the output:

    r = range(5)

    print(r)
    print(list(r))

'''

'''
Ans :-
    output :- 
       
       range(0,5)

       [0,1,2,3,4]

    range(5) creates a range object representing numbers from 0 to 4.

    list(r) converts the range object into a list.

'''

def main():
    r = range(5)

    print(r)
    print(list(r))

if __name__ == "__main__":
    main()    

