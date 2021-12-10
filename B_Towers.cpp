#include <bits/stdc++.h>
using namespace std;

int small(vector<int> arr)
{
	int idx = 0;
	for (int i = 1; i < arr.size(); i++)
	{
		if (arr[i] < arr[idx])
			idx = i;
	}
	return idx;
}

int large(vector<int> arr)
{
	int idx = 0;
	for (int i = 1; i < arr.size(); i++)
	{
		if (arr[i] > arr[idx])
			idx = i;
	}
	return idx;
}

int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> arr(n);
	vector<pair<int, int>> vp;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int count, diff;
	for (count = 1; count <= k; count++)
	{
		int mx = large(arr);
		int mn = small(arr);
		arr[mx]--;
		arr[mn]++;
		vp.push_back(make_pair(mx + 1, mn + 1));
		diff = arr[mx] - arr[mn];
		if (diff <= 1)
			break;
	}

	cout << diff << " " << (count > k ? k : count) << endl;
	for (pair<int, int> pp : vp)
	{
		cout << pp.first << " " << pp.second << endl;
	}
	return 0;
}