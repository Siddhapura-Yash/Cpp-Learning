// 234
// 2*3*4 = 24
// 2+3+4 = 9
// 24-9 = 15

#include <iostream>
using namespace std;

int main()
{   int last,sum = 0;
    int mul = 1;
    int n;

    cout << "Enter number : ";
    cin >> n;
    
    int original = n;

  while(original != 0)
    {
        last = original % 10;
        sum = sum + last;
        mul = mul * last;
        original = original / 10;
    }

    cout << "Multiplication = " << mul << "\n" << "Addition = " << sum << endl;
    cout << "After operation = " << (mul - sum) <<endl;
}