#include <iostream>
using namespace std;

int main()
{
    int n;
    bool prime;

    cout << "Enter number : ";
    cin >> n;

    if (n == 0 || n == 1)
    {
        prime = false;
    }

    else if (n > 2)
    {

        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                prime = false;
                break;
            }
            else
            {
                prime = true;
            }
        }
    }

    else if (n == 2)
    {
        prime = true;
    }
    cout << ((prime) ? "Yes number is prime" : "No number is not prime");
}