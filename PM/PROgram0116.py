'''
Assignment 20

Q1) Design a Python application that creates two separate threads
named Even and Odd.

The Even thread should display the first 10 even numbers.

The Odd thread should display the first 10 odd numbers.

Both threads should execute independently using the threading module.

Ensure proper thread creation and execution.

'''
import threading

def Even():

    print("Even numbers :")

    for i in range(2,21,2):
        print(i)


def Odd():

    print("Odd numbers :")

    for i in range(1,20,2):
        print(i)


def main():

    T1 = threading.Thread(target = Even, name = "Even")
    T2 = threading.Thread(target = Odd, name = "Odd")

    '''
    T1.start()
    T2.start()

    T1.join()
    T2.join()
    '''
    T1.start()
    T1.join()

    T2.start()
    T2.join()


if __name__ == "__main__":
    main()