#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int a[n];
	a[0] = 0;
	a[1] = 1;
	for (int i = 2; i <= n; ++i)
	{
		a[i] = a[i-1] + a[i-2];
	}
	cout << a[n] << endl;

	return 0;
}

// 0 1 1 2 3 5