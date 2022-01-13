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

		for (int i = 0; i < n; i++)
			cin >> arr[i];
		int k = 0;
		while (k < n && arr[k] == 1)
		{
			k++;
		}
		cout << ((k % 2) ^ (k == n) ? "Second" : "First") << endl;
	}

	return 0;
}