#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, k, sum, ans = 3e8, indx;
	cin >> n >> k;
	int a[n + 1];
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		a[i] += a[i - 1];
	}
	for (int i = k; i <= n; i++)
	{
		if (a[i] - a[i - k] < ans)
		{
			ans = a[i] - a[i - k];
			indx = i - k;
		}
	}
	cout << indx + 1;
	return 0;
}