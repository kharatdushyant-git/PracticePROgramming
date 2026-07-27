/*

Q196) write a PROgram to multiply numbers in generic 

*/

#include<iostream>
using namespace std;

template <class Luffy>

Luffy multiply(Luffy iNo1, Luffy iNo2)
{
    Luffy Ans;
    Ans = iNo1 * iNo2;
    return Ans;
}

int main()
{
    int iRet = multiply(10,20);
    printf("%d\n",iRet);

    float fRet = multiply(10.3f,39.4f);
    printf("%f\n",fRet);
    
    return 0;
}