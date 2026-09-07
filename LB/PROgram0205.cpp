/*

Assignment 38

Question 5:
Write generic program to accept N values and reverse the contents.

Input:
10 20 30 10 30 40 10 40 10

Output:
10 40 10 40 30 10 30 20 10

*/

#include<iostream>
using namespace std;

template <class luffy>

void Reverse(luffy *arr, int iSize)
{
    luffy Temp;

    int iStart = 0;
    int iEnd = iSize - 1;

    while(iStart < iEnd)
    {
        Temp = arr[iStart];
        arr[iStart] = arr[iEnd];
        arr[iEnd] = Temp;

        iStart++;
        iEnd--;
    }
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    cout << "Before Reverse : \n";

    for(int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    Reverse(arr, 9);

    cout << "After Reverse : \n";

    for(int i = 0; i < 9 ; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}