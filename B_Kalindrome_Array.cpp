#include <bits/stdc++.h>
using namespace std;

int arr[200007];
int b[200007];
bool ans;
int n;

void check(int x)
{
	int m = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] != x)
			b[m++] = arr[i];
	}

	for (int i = 0; i < m; i++)
	{
		if (b[i] != b[m - i - 1])
			return;
	}
	ans = true;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> n;
		ans = true;
		for (int i = 0; i < n; i++)
			cin >> arr[i];

		for (int i = 0; i < n; i++)
		{
			if (arr[i] != arr[n - i - 1])
			{
				ans = false;
				check(arr[i]);
				check(arr[n - i - 1]);
				break;
			}
		}
		cout << (ans ? "YES" : "NO") << endl;
	}
	return 0;
}