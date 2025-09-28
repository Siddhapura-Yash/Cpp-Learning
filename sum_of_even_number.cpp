// sum of all even number

#include <iostream>
using namespace std;

int main() {
	int n;
	int i = 1;
	int sum = 0;
	
	cout << "Enter number : ";
	cin >> n;
	

	while(i < n)
	{
		if(i % 2== 0)
		{
			sum = sum + i;
			i = i + 1;

		}
		else
		{
			i = i + 1;
		}
	}
	cout << sum;
}