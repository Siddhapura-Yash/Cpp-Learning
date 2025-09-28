#include <iostream>
#include <math.h>
using namespace std;

// int main()
// {
//     int n,num;
//     int ans = 0;
//     int i = 0;
//     cout << "Enter number : ";
//     cin >> num;
//     n = abs(num);

//     while(n != 0)
//     {
//         int bit = n & 1;
//         ans = (bit * pow(10,i) + ans);

//         n = n >> 1;
//         i++;
//     }
//     if(num<0)
//     {
//         cout << "-";
//     }
//     cout << ans << endl;
// }




int main()
{
    int n;
    
    cout << "Enter number : ";
    cin >> n;

    for(int i = 31; i >= 0; i--)
    {
        cout << ((n>>i) & 1);
    }
}