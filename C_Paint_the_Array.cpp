#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		ll arr[n];

		for (auto &a : arr)
			cin >> a;

		ll val1 = 0, val2 = 0;

		for (ll i = 0; i < n; i++)
		{
			if (i % 2 == 0)
				val1 = __gcd(val1, arr[i]);
			else
				val2 = __gcd(val2, arr[i]);
		}

		bool p1 = true, p2 = true;

		for (ll i = 0; i < n; i += 2)
		{
			if (arr[i] % val2 == 0)
			{
				p1 = false;
			}
		}
		for (ll i = 1; i < n; i += 2)
		{
			if (arr[i] % val1 == 0)
			{
				p2 = false;
			}
		}

		if (!p1 && !p2)
			cout << 0 << endl;
		else if (!p2)
			cout << val2 << endl;
		else
			cout << val1 << endl;
	}

	return 0;
}