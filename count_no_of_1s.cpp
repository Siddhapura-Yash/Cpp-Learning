#include <iostream>
using namespace std;

// int main()
// {   int digit,count = 0;
//     int n = 1010110010;
//     int org = n;

//     while(org != 0)
//     {
//         digit = org % 10;
//         org = org / 10;
//         if(digit == 1)
//         {
//             count = count + 1;
//         }
//         else
//         {
//             continue;
//         }
//     } 
//     cout << "No of 1's = " << count << endl;
// }


int main()
{   int count = 0;
    int n = 0b1010110010;

    while(n != 0)
    {
        if(n&1)
        {
            count++;

        }
        n = n >> 1;
    }
    cout << count << endl;
}