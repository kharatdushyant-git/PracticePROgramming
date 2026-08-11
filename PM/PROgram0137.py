'''

Assigment 27

Q1) Write a Python program to implement a class named Bookstore with the
following specifications:

The class should contain two instance variables:

Name (Book Name)
Author (Book Author)

The class should contain one class variable:

NoOfBooks (initialize it to 0).

Define a constructor (__init__) that accepts Name and Author and
initializes the instance variables.

Inside the constructor, increment the class variable NoOfBooks by 1
whenever a new object is created.

Implement an instance method:

Display() - should display book details in the format:

<BookName> by <Author>. No of books: <NoOfBooks>

Example usage:

Obj1 = Bookstore("Linux System Programming", "Robert Love")
Obj1.Display()
'''

class Bookstore:

    NoOfBooks = 0

    def __init__(self, Name, Author):
        self.Name = Name
        self.Author = Author

        Bookstore.NoOfBooks += 1

    def Display(self):
        print(self.Name, "by", self.Author,
              ". No of books:", Bookstore.NoOfBooks)


def main():

    Name = input("Enter Book Name : ")
    Author = input("Enter Author Name : ")

    Obj1 = Bookstore(Name, Author)

    Obj1.Display()


if __name__ == "__main__":
    main()