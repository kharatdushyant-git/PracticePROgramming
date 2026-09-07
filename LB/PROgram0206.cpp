/*

Assignment 39

Question 1:
Write a recursive program which display below pattern.

Output:
* * * * *

*/

#include<iostream>
using namespace std;

void Display()
{
    static int i = 0;

    if(i == 5)
    {
        return;
    }

    cout<< "* ";
    i++;

    Display();
}

int main()
{
    Display();

    return 0;
}