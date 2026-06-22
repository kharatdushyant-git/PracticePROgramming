'''
Q14) Write Function that does not return anything but print a message.
     Explain the default return valu of such function.

'''
'''
Ans :- return value of such fucntion is <<None>> 
       beacuase python by default consider return type of Fucntion as None if Function dont has Any Return Satement

'''

def Display():
    print("Hiii")

def main():
    Ret = Display()
    print("Return Value Of this Function : ",Ret)

if __name__ == "__main__":
    main()    