#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	double x, y;
	ll a;
	cin >> x >> y >> a;

	cout << (ll)ceil(x / a) * (ll)ceil(y / a) << endl;
	return 0;
}