'''
Q3)What is the id() returns ?
   Is value returned by id() same for vaiables holding the same value ?

'''
'''
Ans :=
    1) id() function return the unique memeory adress(identity) of an object 
    2) the value returned by id() may be same for immutable object like small integer
       but mutable for objects like list
'''

def main():
    a = 10
    b = 10

    print("address of integer a : ",id(a))
    print("address of integer b : ",id(b))

    a = [10]
    b = [10]

    print("Address of list a : ",id(a))
    print("Address of list b : ",id(b))

if __name__ == "__main__":
    main()
