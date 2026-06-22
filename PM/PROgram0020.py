'''

Q20) Explain Python manages memory?
     why does programmersnot need to explicitly alloacte free memory?

'''
'''
Ans :- 
   1)Python does not store 100 inside x.

   Instead:

   1) Creates an integer object 100 in memory. 
   2) Stores the memory address of that object.
   3) Makes x refer to that address.

   (x)
    |
    v
    +------+
    | 100  |
    +------+

    2) Python manages memory automatically using reference counting and garbage collection, 
       so programmers don't need to explicitly allocate (malloc) or free (free) memory like in C.

      ---- X
      |
      v
   +------+
   | 100  |
   +------+
      ^
      |
      -----  Y 