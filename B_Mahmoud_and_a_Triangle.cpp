#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{

	int n;
	cin >> n;
	ll arr[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);

	for (int i = n - 1; i >= 2; i--)
	{
		ll a = arr[i], b = arr[i - 1], c = arr[i - 2];
		if (a + b > c && b + c > a && c + a > b)
		{
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO\n";

	return 0;
}