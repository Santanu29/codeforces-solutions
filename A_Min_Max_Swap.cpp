#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	int a[n], b[n];

	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		cin >> b[i];

	for (int i = 0; i < n; i++)
	{
		if (a[i] < b[i])
		{
			int temp = a[i];
			a[i] = b[i];
			b[i] = temp;
		}
	}

	cout << (*max_element(a, a + n) * *max_element(b, b + n)) << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}