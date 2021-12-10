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

		for (int i = 2; i <= 30; i++)
		{
			int val = (1 << i) - 1;
			if (n % val == 0)
			{
				cout << n / val << endl;
				break;
			}
		}
	}
	return 0;
}