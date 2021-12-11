#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a = 1;
		for (int i = 1; i <= n; i++)
		{
			a = (a * 10) + 1;
			cout << a << " ";
		}
		cout << "\n";
	}
	return 0;
}