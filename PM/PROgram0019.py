'''

Q19) what the difference between 
    
     x = 10;
     x = "10"

     is it allowed ? why?

'''

'''
Ans := yes it's allowed beacuase 
       in First case x is initialized with an interger 10
       & in Second case x is initialized with an String "10"\

'''

def main():
    x = 10
    print(type(x))

    x = "10"
    print(type(x))

if __name__ == "__main__":
    main()    
