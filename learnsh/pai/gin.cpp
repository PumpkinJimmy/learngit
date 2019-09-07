#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand(time(0));
	int n = rand() % 10;
	cout << n << endl;
	for (int i = 1; i <= n; i++)
	{
		cout << rand() % 100 << endl;
	}
	return 0;
}
