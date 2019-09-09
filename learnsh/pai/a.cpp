#include <iostream>
using namespace std;
int a[100000];
int main()
{
	int n; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for (int i = 2; i <= n; i++)
	{
		int k = a[i], j;
		for (j = i - 1; j >= 1 && a[j] > k; j--)
		{
			a[j + 1] = a[j];
		}
		a[j + 1] = k;
	}
	for (int i = 1; i <= n; i++)
	{
		cout << a[i] << endl;
	}
	return 0;
}
