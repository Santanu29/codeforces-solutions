#include <bits/stdc++.h>
using namespace std;

int main()
{
	int year;
	cin >> year;

	int a, b, c, d;
	do
	{
		year++;
		a = year % 10;
		b = (year / 10) % 10;
		c = (year / 100) % 10;
		d = (year / 1000);
	} while (a == b || a == c || a == d || b == c || b == d || c == d);
	cout << year;
}