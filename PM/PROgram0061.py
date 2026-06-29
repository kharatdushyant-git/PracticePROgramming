'''

Q21) Write PROgram that Accept length annd width of rectangle form user and print area of rectangle

'''

def Area(length,width):

    Area = length * width

    return Area

def main():
    Value1 = float(input("Enter the Length of Rectangle : "))    
    Value2 = float(input("Enter the Width of Rectangle : ")) 

    Ret = Area(Value1, Value2)

    print("Area of Rectangle is : ",Ret)

if __name__ == "__main__":
    main()           