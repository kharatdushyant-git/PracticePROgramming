/*

Assignment 39

Question 3:
Write a recursive program which display below pattern.

Output:
5 4 3 2 1

*/

#include<iostream>
using namespace std;

void Display()
{
    static int i = 5;

    if(i == 0)
    {
        return;
    }

    cout<< i << " ";
    i--;

    Display();
}

int main()
{
    Display();

    return 0;
}