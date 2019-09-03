#include <iostream>
#include "primetest.hpp"
using namespace std;

int main()
{
	PrimeTest pt;
	while (1)
	{
		int n;
		cout << "Enter the number you want to check:" << endl;
		cin >> n;
		if (cin)
		{
			cout << (pt.test(n) ? "true" : "false") << endl;
		}
		else
		{
			cout << "Bad input, quit" << endl;
			break;
		}
	}
	return 0;
}
