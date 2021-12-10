#include <iostream>
#include <algorithm>
using namespace std;

bool comp(int a, int b)
{
	if (a > b)
		return true;
	return false;
}

int main()
{
	int n;
	cin >> n;
	int arr[n];
	int consum = 0;
	for (auto &i : arr)
	{
		cin >> i;
		consum += i;
	}

	sort(arr, arr + n, comp);

	int mysum = 0;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		mysum += arr[i];
		consum -= arr[i];
		count++;
		if (mysum > consum)
			break;
	}

	cout << count;
	return 0;
}