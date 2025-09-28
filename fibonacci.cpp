#include <iostream>
using namespace std;

int main()
{
    int next = 0;
    int a = 0;
    int b = 1;
    int n;

    cout << "Enter number : ";
    cin >> n;

    for(int i = 0; i <= n; i++)
    {
        cout << a <<" ";
        a = b;
        b = next;
        next = a + b;
        b = b + 1;
    }
    
}