#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num)
{
	for (int i = 2; i <= sqrt(num); i++)
		if (num % i == 0)
			return false;
	return true;
}

int main()
{
	int n, x;
	cin >> n >> x;

	if (x == 1)
	{
		cout << 1;
		return 0;
	}
	if (isPrime(x))
		cout << (x < n ? 2 : 0) << endl;
	else
	{
		int count = 0;
		for (int i = 1; i <= n; i++)
			if (x % i == 0 && x / i <= n)
				count++;

		cout << count << endl;
	}

	return 0;
}