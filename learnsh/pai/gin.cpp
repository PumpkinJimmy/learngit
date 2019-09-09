#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand(time(0));
	int n = rand() % 5000 + 1;
	cout << n << endl;
	for (int i = 1; i <= n; i++)
	{
		cout << rand() % 100000 << endl;
	}
	return 0;
}
