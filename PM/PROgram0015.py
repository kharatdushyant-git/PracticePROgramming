'''

Q15)Write the Difference between 
    1)print()
    2)return

'''
'''
Ans :- 1) print() is int built Functoin of python that print anything inside it in "".
          and as well as value of declared variable or return type of caleed function.
       2) on the Other hande return Statement only give or show the return type of fucntions
          whenever they are called.      
'''
def fun():
    print("Hello!!")
    return 21

def main():
    Ret = fun()

    print(Ret)
    
if __name__ == "__main__":
    main()