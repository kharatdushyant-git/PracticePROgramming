'''
Assignment 21

Q3) Design a Python application where multiple threads update
a shared variable.

Use a Lock to avoid race conditions.

Each thread should increment the shared counter multiple times.

Display the final value of the counter after all threads
complete execution.

'''

import threading

Counter = 0

Lock = threading.Lock()

def Increment():

    global Counter

    for i in range(100000):

        Lock.acquire()

        Counter = Counter + 1

        Lock.release()


def main():

    T1 = threading.Thread(target = Increment, name = "Thread1")
    T2 = threading.Thread(target = Increment, name = "Thread2")

    T1.start()
    T2.start()

    T1.join()
    T2.join()

    print("Final value of Counter is :", Counter)

    print("Exit from main")


if __name__ == "__main__":
    main()