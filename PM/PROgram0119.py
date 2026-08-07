'''
Assignment 20

Q4) Design a Python application that creates three threads named
Small, Capital and Digits.

All threads should accept a string as input.

The Small thread should count and display the number of
lowercase characters.

The Capital thread should count and display the number of
uppercase characters.

The Digits thread should count and display the number of
numeric digits.

Each thread must also display its Thread ID and Thread Name.

'''

import threading

def Small(Str):

    Count = 0

    for Ch in Str:
        if(Ch >= 'a' and Ch <= 'z'):
            Count = Count + 1

    print("Thread ID :", threading.get_ident())
    print("Thread Name :", threading.current_thread().name)
    print("Number of lowercase characters :", Count)
    print()


def Capital(Str):

    Count = 0

    for Ch in Str:
        if(Ch >= 'A' and Ch <= 'Z'):
            Count = Count + 1

    print("Thread ID :", threading.get_ident())
    print("Thread Name :", threading.current_thread().name)
    print("Number of uppercase characters :", Count)
    print()


def Digits(Str):

    Count = 0

    for Ch in Str:
        if(Ch >= '0' and Ch <= '9'):
            Count = Count + 1

    print("Thread ID :", threading.get_ident())
    print("Thread Name :", threading.current_thread().name)
    print("Number of digits :", Count)
    print()


def main():

    Value = input("Enter a string : ")

    T1 = threading.Thread(target = Small, args = (Value,), name = "Small")
    T2 = threading.Thread(target = Capital, args = (Value,), name = "Capital")
    T3 = threading.Thread(target = Digits, args = (Value,), name = "Digits")

    T1.start()
    T1.join()

    T2.start()
    T2.join()

    T3.start()
    T3.join()

    print("Exit from main")


if __name__ == "__main__":
    main()