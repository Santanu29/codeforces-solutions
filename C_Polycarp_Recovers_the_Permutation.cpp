#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int arr[n];
		int ans[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];

		if (arr[0] != n || arr[n - 1] != n)
			cout << -1 << endl;

		int l = 0, r = n;
		if (arr[0] == n)
			l++;
		else
			r--;

		ans[n - 1] = n;
		int clr = n - 2;

		for (int i = l; i < r; i++)
			ans[clr--] = arr[i];

		for (int i = l; i < r; i++)
			cout << ans[i] << " ";
		cout << endl;
	}
	return 0;
}