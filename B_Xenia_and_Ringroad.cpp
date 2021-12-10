#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int initial = 1;
	long long int count = 0;
	for (int i = 0; i < m; i++)
	{
		int a;
		cin >> a;
		if (a >= initial)
			count += (a - initial);
		else
			count += (n - initial) + a;
		initial = a;
	}
	cout << count << endl;
	return 0;
}