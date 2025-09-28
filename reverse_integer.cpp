#include <iostream>
#include <math.h>
using namespace std;

// ans*10 > max
// ans*10 < min
// then return 0

// if we move 10 another side throw_with_nested
// ans > max/10
// ans < min/10

int main()
{
    int max = 2147483647;  // INT_MAX
    int min = -2147483648; // INT_MIN
    int n;
    int last = 0;
    int reverse = 0;

    bool overflow;

    cout << "Enter number : ";
    cin >> n;

    while (n != 0)
    {
        if (reverse > (max / 10) || reverse < (min / 10)) // while doing if reverse become larger then stop
        {
            overflow = true;
            break;
        }
        last = n % 10;
        n = n / 10;
        reverse = (reverse * 10) + last;
        overflow = false;
    }

    cout << ((overflow) ? 0 : reverse);
}






int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    int max = 2147483647;      // INT_MAX
    int min = -2147483648;     // INT_MIN
    int reverse = 0;

    while(n != 0) {
        int last = n % 10;

        // check overflow before multiplying
        if(reverse > max/10 || reverse < min/10) {
            cout << 0 << endl;
            return 0;
        }

        reverse = reverse * 10 + last;
        n /= 10;
    }

    cout << reverse << endl;
    return 0;
}
