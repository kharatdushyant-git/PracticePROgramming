'''

Q18) Explain why the following code work without decalartion
     x = 100

'''
'''

Ans :- As python is is dynaically typed language there is no need to declare variable in python.
       unlike c and java which need the data type to declare the variable beacause c is nativ langauge which directily communicate t os 
       and it neccesary to give proper data type before variable declaration.
       also there no need to add ; to the end of decalration.
       beacuse python is build to be a simple and for writting easy syntax that why it has laxical anaysis and parsing
       which make easy to write variable without declaring its datatype.

'''       

def main():
    x = 100

    print(x)

if  __name__ == "__main__":
    main()

# for c
#
# #include<stdio.h>
#
# int main()
#{
#    int iValue = 0;
#
#    printf(iValue);
#}

