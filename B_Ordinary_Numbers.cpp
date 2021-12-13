#include <iostream>
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
		int ans = 0;
		for (int i = 1; i <= n; i = i * 10 + 1)
		{
			for (int j = 1; j < 10; j++)
			{
				if (i * j <= n)
					ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}