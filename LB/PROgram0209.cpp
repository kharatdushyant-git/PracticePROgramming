/*

Assignment 39

Question 4:
Write a recursive program which display below pattern.

Output:
A B C D E F

*/

#include<iostream>
using namespace std;

void Display()
{
    static char ch = 'A';

    if(ch == 'G')
    {
        return;
    }

    cout<< ch << " ";
    ch++;

    Display();
}

int main()
{
    Display();

    return 0;
}