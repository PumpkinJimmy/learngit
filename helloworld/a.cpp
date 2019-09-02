#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "Enter a number:" << endl;
	cin >> a;
	if (cin)
	{
		cout << "You've entered:" << a << endl;
	}
	else
	{
		cout << "Bad input." << endl;
	}
	return 0;
}
