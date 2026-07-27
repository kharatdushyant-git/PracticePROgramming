/*

Q199) write a PROgram to accept n number  from user  and return the Largest of that values in generic 

*/

#include<iostream>
using namespace std;

template <class Luffy>

Luffy Largest(Luffy *Arr, int Size)
{
    int iCnt = 0;
    Luffy iLarge = 0;

    for(iCnt = 0; iCnt < Size ; iCnt++)
    {
        if(Arr[iCnt] > iLarge)
        {
            iLarge = Arr[iCnt];
        }
    }
    
    return iLarge;
}

int main()
{
    int iArr[] = {10,20,30};
    float fArr[] = {56.67f,20.56f,30.6f};

    int iRet = 0;
    iRet = Largest(iArr,3);
    printf("%d\n",iRet);

    float fRet = 0;
    fRet = Largest(fArr,3);
    printf("%f\n",fRet);
    
    return 0;
}