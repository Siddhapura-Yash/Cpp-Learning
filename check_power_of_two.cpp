#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    bool success;

    cout << "Enter number : ";
    cin >> n;

    for(int i = 0; i<31 ; i++)
    {
        if(n == pow(2,i))
        {
            success = true;
            break;
        }
        else
        {
            success = false;
        }
    }
    cout << ((success) ? "Yes" : "No") ;
}