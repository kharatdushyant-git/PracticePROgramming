'''

Assignent 15 :

Q7) Write the filter() Function that accept list of string and return the list of string grater than 5

'''
def Check5(string):
    return (len(string) > 5)

def main():
    Data = ["Luffy","Zoro","Dushyant","Prathmesh","Nami"]

    print("Input data is : ",Data)

    FData = list(filter(Check5,Data))

    print("Data after filter : ",FData)

    
if __name__ == "__main__":
    main()  