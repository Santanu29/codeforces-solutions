#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	vector<int> a(n, 0);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	for (int i = 1; i < n; i++)
	{
		if (v[i] > v[i - 1])
			a[i] = a[i - 1] + 1;
	}

	int idx = max_element(a.begin(), a.end()) - a.begin();

	cout << a[idx] + 1 << endl;

	return 0;
}