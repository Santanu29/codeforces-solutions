#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;
		vector<int> arr(n * 2);
		vector<int> ans(n, 0);

		for (int i = 0; i < n * 2; i++)
			cin >> arr[i];

		int j = 0;
		for (auto i : arr)
		{
			if (count(ans.begin(), ans.end(), i) == 0)
				ans[j++] = i;
		}

		for (auto i : ans)
			cout << i << " ";
		cout << endl;
	}
	return 0;
}