#include <iostream>
#define ll long long int
using namespace std;

int main()
{
	ll k, n, w;
	cin >> k >> n >> w;
	ll x = (k * w * (w + 1)) / 2;
	cout << (n >= x ? 0 : x - n) << endl;
	return 0;
}