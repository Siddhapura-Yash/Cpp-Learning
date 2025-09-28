#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n = 0b111;
    int ans = 0;

    for(int i = 0;i < 31; i++)
    {
        int bit = n & 1;
        ans = (bit * pow(2,i)+ans);
        n = n >> 1;
    }

    
cout << "Decimal representation is " << ans;

}