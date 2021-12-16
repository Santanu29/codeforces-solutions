#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int sum1 = 0, sum2 = 0, sum3 = 0;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		sum1 += a;
	}
	for (int i = 0; i < n - 1; i++)
	{
		int a;
		cin >> a;
		sum2 += a;
	}
	for (int i = 0; i < n - 2; i++)
	{
		int a;
		cin >> a;
		sum3 += a;
	}

	cout << (sum1 - sum2) << "\n"
		 << (sum2 - sum3) << endl;
	return 0;
}