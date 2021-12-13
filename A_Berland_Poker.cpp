#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m, k;
		cin >> n >> m >> k;

		int my = min(m, n / k);
		int th = ceil(m - my + k - 2) / (k - 1);
		cout << my - th << endl;
	}
	return 0;
}