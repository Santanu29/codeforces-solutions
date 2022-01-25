#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int count = 0;
	int rmin = INT_MAX;

	for (int i = n - 1; i >= 0; i--)
	{
		if (arr[i] > rmin)
			count++;
		rmin = min(arr[i], rmin);
	}

	cout << count << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}