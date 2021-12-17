#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int arr[s.size()];

	for (int i = 0; i < s.size(); ++i)
		arr[i] = arr[i - 1] + (s[i] == s[i - 1]);

	int m;
	cin >> m;

	for (int i = 0; i < m; i++)
	{
		int l, r;
		cin >> l >> r;

		cout << (arr[r - 1] - arr[l - 1]) << endl;
	}

	return 0;
}
