/*

Assignment 38

Question 2:
Write generic program to accept N values and count frequency
of any specific value.

Input:
10 20 30 10 30 40 10 40 10

Value to check frequency:
10

Output:
4
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
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    int iRet = 0;

    iRet = count(arr,9,10);

    cout<<iRet;

    return 0;
}
