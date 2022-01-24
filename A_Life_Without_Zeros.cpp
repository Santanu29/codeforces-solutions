#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int sum = a + b;

	string stringA = to_string(a);
	string stringB = to_string(b);
	string stringSum = to_string(sum);

	stringA.erase(remove(stringA.begin(), stringA.end(), '0'), stringA.end());
	stringB.erase(remove(stringB.begin(), stringB.end(), '0'), stringB.end());
	stringSum.erase(remove(stringSum.begin(), stringSum.end(), '0'), stringSum.end());

	a = stoi(stringA);
	b = stoi(stringB);
	sum = stoi(stringSum);

	cout << (a + b == sum ? "YES" : "NO") << endl;

	return 0;
}