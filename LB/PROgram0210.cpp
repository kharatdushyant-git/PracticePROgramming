/*

Assignent 39

Question 5:
Write a recursive program which display below pattern.

Output:
a b c d e f

*/

#include<iostream>
using namespace std;

void Display()
{
    static char ch = 'a';

    if(ch == 'g')
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