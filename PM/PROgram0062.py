'''

Q22) Write PROgram that Accept radius form user and print area of Circle

'''

def Area(Raduis):

    Pi = 3.14
    Area = Raduis * Raduis * Pi

    return Area

def main():
    Value1 = float(input("Enter the Raduis of Circle : "))    

    Ret = Area(Value1)

    print("Area of Rectangle is : ",Ret)

if __name__ == "__main__":
    main()           