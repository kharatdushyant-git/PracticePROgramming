'''

Q28) What is the range data type in Python?
     How is it different from a list of numbers?

'''
'''
Ans :- Range is Data type consist of 3 main componet as 1st(Start) 2nd(End) And 3rd(step or Jump)
       unlike the List which print All the all the number as it is
       Range print number between the range with its defnied jump

       Example
       1) range(1,5,2)
          output :- 1 3

       2) List[10,20,30]   
          output :- 10 20 30
'''
def main():
    rng = range(1,9,2)

    for no in rng:
        print(no)
        
    print(type(rng))

    lst = [10,20,30,40,50]
    print(lst)
    print(type(lst))

if __name__ == "__main__":
    main()    