/*

Assignments 38

Question 3:
Write generic program to accept N values and search first
occurrence of any specific value.

Input:
10 20 30 10 30 40 10 40 10

Value to search:
40

Output:
6
*/

#include<iostream>
using namespace std;

template <class luffy>

int count(luffy * arr, int Size, luffy No)
{
    int iCount = 0;

    for(int i = 0; i < Size; i++)
    {
        if(arr[i] == No)
        {
            return i + 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    int iRet = 0;

    iRet = count(arr,9,40);

    cout<<iRet;

    return 0;
}