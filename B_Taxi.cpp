#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int one = 0, two = 0, three = 0, four = 0;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		switch (x)
		{
		case 1:
			one++;
			break;
		case 2:
			two++;
			break;
		case 3:
			three++;
			break;
		case 4:
			four++;
			break;
		}
	}

	int ans = four;
	int a = min(one, three);
	ans += a;
	one -= a;
	three -= a;
	ans += two / 2 + three;
	two = two % 2;
	if (two == 1)
	{
		ans++;
		one -= 2;
	}
	if (one > 0)
		ans += ceil((one + 3) / 4);

	cout << ans;

	return 0;
}
