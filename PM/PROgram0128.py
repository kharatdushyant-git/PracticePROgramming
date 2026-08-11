'''
Assignment 22

Q4) Write a program that accepts a list of integers and uses
multiprocessing.Pool to count the number of prime numbers
between 1 and N for each element in the list.

Input :

[100000, 200000, 300000, 400000]

Output :

Display the count of prime numbers from 1 to N for each element.

'''

from multiprocessing import Pool

def ChkPrime(No):

    if(No <= 1):
        return False

    for i in range(2, int(No ** 0.5) + 1):
        if(No % i == 0):
            return False

    return True


def PrimeCount(No):

    Count = 0

    for i in range(1, No + 1):
        if(ChkPrime(i) == True):
            Count = Count + 1

    return Count


def main():

    Arr = [100000, 200000, 300000, 400000]

    P = Pool()

    Result = P.map(PrimeCount, Arr)

    P.close()
    P.join()

    print(Result)


if __name__ == "__main__":
    main()