/*

Q198) write a PROgram to accept n number  from user  and return additin of that values in generic 

*/

#include<iostream>
using namespace std;

template <class Luffy>

Luffy AddN(Luffy *Arr, int Size)
{
    Luffy Sum = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < Size ; iCnt++)
    {
        Sum += Arr[iCnt];
    }
    
    return Sum;
}

int main()
{
    int iArr[] = {10,20,30};
    float fArr[] = {56.67f,20.56f,30.6f};

    int iRet = 0;
    iRet = AddN(iArr,3);
    printf("%d\n",iRet);

    float fRet = 0;
    fRet = AddN(fArr,3);
    printf("%f\n",fRet);
    
    return 0;
}