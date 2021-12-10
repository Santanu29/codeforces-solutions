#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	// int longest = 0;
	// for (int i = 0; i < n; i++)
	// {
	// 	int count = 0;
	// 	for (int j = i + 1; j < n; j++)
	// 	{
	// 		if (arr[j] >= arr[i])
	// 			count++;
	// 		else
	// 		{
	// 			i = j;
	// 		}
	// 	}
	// 	longest = max(longest, count);
	// }
	// cout << longest;

	int v[n] = {1};
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < arr[i - 1])
			v[i] = 1;
		else
			v[i] = v[i - 1] + 1;
	}

	sort(v, v + n);
	cout << v[n - 1];

	// for (int i = 0; i < n; i++)
	// 	cout << arr[i] << " ";

	return 0;
}