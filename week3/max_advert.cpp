#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	long long sum = 0;
	vector<long long> a(n), b(n);
	for (int i = 0; i < n; ++i) { cin >> a[i]; }
	for (int i = 0; i < n; ++i) { cin >> b[i]; }
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	for (int i = 0; i < n; ++i)
	{
		sum += a[i]*b[i];
	}

	cout << sum;

	return 0;
}
