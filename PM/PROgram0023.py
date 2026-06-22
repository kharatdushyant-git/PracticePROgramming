'''

Q23) Predict the output:

    lst = [10, 20, 30]
    tpl = (10, 20, 30)

    lst[0] = 100
    tpl[0] = 100

    Which line will raise an error and why?

'''

'''
Ans :-

    The statement:

        tpl[0] = 100    4rth Line

    will raise a TypeError because tuples are immutable and do not allow
    modification of their elements after creation.

    The statement:

        lst[0] = 100

    works successfully because lists are mutable.

'''