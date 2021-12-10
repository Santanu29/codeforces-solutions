#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		ll l, r, k;
		cin >> n >> l >> r >> k;

		ll arr[n];

		for (int i = 0; i < n; i++)
			cin >> arr[i];

		sort(arr, arr + n);

		ll count = 0;
		for (int i = 0; i < n; i++)
		{
			if (arr[i] > k)
				break;
			if (arr[i] > r || arr[i] < l)
				continue;
			else
			{
				count++;
				k -= arr[i];
			}
		}
		cout << count << endl;
	}
	return 0;
}