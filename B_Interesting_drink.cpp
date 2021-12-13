#include <bits/stdc++.h>
using namespace std;

// int bin_search(int arr[], int x, int n)
// {
// 	int l = 0;
// 	int h = n;
// 	int mid;
// 	while (l < h)
// 	{
// 		mid = l + (h - l) / 2;
// 		if (arr[mid] <= x)
// 			l = mid + 1;
// 		else if (arr[mid] > h)
// 			h = mid;

// 		if (arr[l] <= x && arr[l + 1] > x)
// 			return l + 1;
// 	}
// }

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);

	int q;
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		int x;
		cin >> x;
		int y = upper_bound(arr, arr + n, x) - arr;
		cout << y << endl;
	}
	return 0;
}