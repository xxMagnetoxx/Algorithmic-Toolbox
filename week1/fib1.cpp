#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;

	int first = 0, second = 1, result = 0, index = 2;
	while(index <= n)
	{
		result = first + second;
        first = second;
        second = result;
	}
	cout << result << endl;

	return 0;
}