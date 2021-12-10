#include <iostream>
#define ll long long int
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		int three = 0, two = 0;
		while (n % 3 == 0)
		{
			n = n / 3;
			three++;
		}
		while (n % 2 == 0)
		{
			n = n / 2;
			two++;
		}

		if (n == 1 && three >= two)
		{
			cout << ((2 * three) - two) << endl;
		}
		else
		{
			cout << -1 << endl;
		}
	}
	return 0;
}