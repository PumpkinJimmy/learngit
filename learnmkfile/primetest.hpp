class PrimeTest
{
private:
	bool flag[1000000];
	int prime[100000];
public:
	PrimeTest();
	bool test(int n);
	void print_prime(int n=-1);
};
