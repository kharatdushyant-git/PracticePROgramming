'''
Q2)What is Difference between 

    a = 10
    b = 10

    &

    a = [10]
    b = [10]

    explain using id()

'''
def main():
    a = 10
    b = 10

    print(id(a))
    print(id(b))

    a = [10]
    b = [10]

    print(id(a))
    print(id(b))

if __name__ == "__main__":
    main()

'''
a = 10
b = 10
   
    its normal integer variable where both a and b will point same address as
    they are initialized with same data and same address

    id(a) == id(b)

a = [10]
b = [10] 

    its not integer its list[] so address will be diff  
    
    id(a) != id(b)
'''
