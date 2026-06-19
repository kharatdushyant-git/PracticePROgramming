'''
Q4) what id memmory purpose od getsize()?
    why is memory size is diff fro diff data type

'''
'''
Ans := 
    1) getsize() is used to show the actual size of data type which the method od module sys(System)
    2) unlike c,c++ datatype which serve purpose only storing data, python data type are dynamic and
       sometimes diff immutable object point to same data, data type in python ot only stores data its store 
       there adrress,refrence count and meta data that why memory size is diff
'''
import sys

def main():
    a = 10
    b = "Hello!!!"
    c = 10.12
    d = 10.2345543234  

    print("Data Type of a : ",type(a))      
    print("Data Type of b : ",type(b))      
    print("Data Type of c : ",type(c))      
    print("Data Type of d : ",type(d)) 

    print("Memory size of a : ",sys.getsizeof(a))     
    print("Memory size of a : ",sys.getsizeof(b))     
    print("Memory size of a : ",sys.getsizeof(c))     
    print("Memory size of a : ",sys.getsizeof(d))     

if __name__ == "__main__":
    main()
