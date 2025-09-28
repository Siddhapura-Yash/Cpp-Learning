#include <iostream>
using namespace std;

int main()
{
    int n;
    int mask = 0;
    
    cout << "Enter number : ";
    cin >> n;
    
    int org = n;

    while(n != 0)
    {
        mask = (mask << 1) | 1;
        n = n >> 1;
    }

    int ans = ((~org) & mask);

    cout << ans;
}