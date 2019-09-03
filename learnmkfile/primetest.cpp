#include <iostream>
#include "primetest.hpp"

PrimeTest::PrimeTest()
{
	for (int i = 2; i <= 500000; i++)
	{
		if (!flag[i])
		{
			prime[++prime[0]] = i;
		}
		for (int j = 1; j <= prime[0] && (long long)(prime[j]) * i <= 500000; j++)
		{
			flag[prime[j] * i] = true;
			if (i % prime[j] == 0) break;
		}
	}
}
bool PrimeTest::test(int n)
{
	if (n == 1) return false;
	return !flag[n];
}
void PrimeTest::print_prime(int n)
{
	if (n == -1) n = prime[0];
	for (int i = 1; i <= n; i++)
	{
		std::cout << prime[i] << std::endl;
	}
}
