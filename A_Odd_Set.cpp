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
		int arr[n * 2];
		int odd = 0, even = 0;
		for (int i = 0; i < n * 2; i++)
		{
			cin >> arr[i];
			if (arr[i] % 2 == 0)
				even++;
			else
				odd++;
		}
		cout << (even == odd ? "Yes" : "No") << endl;
	}

	return 0;
}