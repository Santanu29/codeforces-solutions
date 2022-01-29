#include <bits/stdc++.h>
using namespace std;

bool isOdd(int n)
{
	return n % 2 == 1;
}

void solve()
{
	int r, g, b, w;
	cin >> r >> g >> b >> w;

	int odd = (r % 2) + (g % 2) + (b % 2) + (w % 2);
	if (odd <= 1)
	{
		cout << "YES" << endl;
		return;
	}
	else if (r && g && b)
	{
		r--;
		g--;
		b--;
		w += 3;
		odd = (r % 2) + (g % 2) + (b % 2) + (w % 2);
	}
	cout << (odd <= 1 ? "YES" : "NO") << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}