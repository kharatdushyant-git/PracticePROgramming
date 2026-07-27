/*

Q200) write a PROgram to accept n number  from user  and return the Smallest of that values in generic 

*/

#include<iostream>
using namespace std;

template <class Luffy>

Luffy Smallest(Luffy *Arr, int Size)
{
    int iCnt = 0;
    Luffy iSmall = Arr[0];

    for(iCnt = 0; iCnt < Size ; iCnt++)
    {
        if(Arr[iCnt] < iSmall)
        {
            iSmall = Arr[iCnt];
        }
    }
    
    return iSmall;
}

int main()
{
    int iArr[] = {10,20,30};
    float fArr[] = {56.67f,20.56f,30.6f};

    int iRet = 0;
    iRet = Smallest(iArr,3);
    printf("%d\n",iRet);

    float fRet = 0;
    fRet = Smallest(fArr,3);
    printf("%f\n",fRet);
    
    return 0;
}