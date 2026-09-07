/*

Assignmenet 39

Question 2:
Write a recursive program which display below pattern.

Output:
1 2 3 4 5

*/

#include<iostream>
using namespace std;

void Display()
{
    static int i = 1;

    if(i == 6)
    {
        return;
    }

    cout<< i << " ";
    i++;

    Display();
}

int main()
{
    Display();

    return 0;
}