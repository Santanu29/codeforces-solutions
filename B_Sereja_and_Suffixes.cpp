#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	set<int> s;

	int arr[n], unique[n];
	for (auto &a : arr)
		cin >> a;

	unique[n - 1] = 1;
	s.insert(arr[n - 1]);
	for (int i = n - 2; i >= 0; i--)
	{
		if (s.find(arr[i]) == s.end())
		{
			s.insert(arr[i]);
			unique[i] = unique[i + 1] + 1;
		}
		else
			unique[i] = unique[i + 1];
	}

	for (int i = 0; i < m; i++)
	{
		int idx;
		cin >> idx;
		cout << unique[idx - 1] << endl;
	}
	return 0;
}