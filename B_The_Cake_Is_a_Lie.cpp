#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int x, y, bur;
		cin >> x >> y >> bur;

		int a = x - 1;
		int b = y - 1;

		int sum = (y - 1) + (x - 1) * y;

		cout << (sum == bur ? "YES" : "NO") << endl;
	}

	return 0;
}