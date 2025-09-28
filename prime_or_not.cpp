// prime or not
// A prime number is an integer greater than 1 that has exactly two divisors: 1 and itself.

#include <iostream>
using namespace std;

int main() {
	int n;
	int i = 2;
	bool prime;

	cout << "Enter number : ";
	cin >> n;

	if(n>2) {
		while(i<n)
		{
			if(n%i == 0)
			{
				prime = false;
				i = i + 1;
				break;
			}
			else
			{
				prime = true;
				i = i + 1;
			}
		}
	}

	else if(n == 2)
	{
		prime = true;

	}

	else
	{
		prime = false;
	}

	cout << ((prime == true) ? "Yes prime" : "Not prime" )<<endl;
}