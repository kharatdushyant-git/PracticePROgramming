/*

Q197) write a PROgram to find the largest numbers in generic 

*/

#include<iostream>
using namespace std;

template <class Luffy>

Luffy Largest(Luffy iNo1, Luffy iNo2, Luffy iNo3)
{
    if(iNo1 > iNo2 && iNo1 > iNo3)
    {
        return iNo1;
    }
    else if(iNo2 > iNo1 && iNo2 > iNo3)
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }
}

int main()
{
    int iRet = Largest(10,20,30);
    printf("%d\n",iRet);

    float fRet = Largest(50.90f,10.3f,39.4f);
    printf("%f\n",fRet);
    
    return 0;
}