#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll k2, k3, k5, k6;
	cin >> k2 >> k3 >> k5 >> k6;

	ll sum = 0;
	ll a = min(k2, min(k5, k6));
	k2 = k2 - a;
	k5 = k5 - a;
	k6 = k6 - a;

	sum += (256 * a);

	ll b = min(k2, k3);

	sum += (32 * b);

	cout << sum << endl;

	return 0;
}