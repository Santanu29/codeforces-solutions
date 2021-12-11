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
		n = n / 2;
		ll sum = 8 * ((n * (n + 1) * ((2 * n) + 1)) / 6);
		cout << sum << endl;
	}
	return 0;
}