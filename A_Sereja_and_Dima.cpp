#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];

	int s = 0, d = 0;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int i = 0, j = n - 1;
	while (i <= j)
	{
		s += (arr[i] > arr[j] ? arr[i++] : arr[j--]);
		if (!(i <= j))
			break;
		d += (arr[i] > arr[j] ? arr[i++] : arr[j--]);
	}
	// if (n % 2 == 1)
	// 	s += arr[n / 2 + 1];
	cout << s << " " << d;
	return 0;
}