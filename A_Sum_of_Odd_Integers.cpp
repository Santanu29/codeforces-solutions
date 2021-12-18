#include <iostream>
#define ll long long
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ll n, k;
		cin >> n >> k;

		if ((k * k <= n) && (k % 2 == n % 2))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}