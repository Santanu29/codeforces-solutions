#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int arr[n];

	for (auto &i : arr)
		cin >> i;

	sort(arr, arr + n, greater<int>());

	cout << (arr[0] == 1 ? "HARD" : "EASY");
}