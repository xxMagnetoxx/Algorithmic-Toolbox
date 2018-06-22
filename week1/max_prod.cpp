#include <bits/stdc++.h>
using namespace std;

long long MaxPairwiseProduct(vector<int> numbers) {
	long long product = 0;
	sort(numbers.begin(), numbers.end());
	int n = numbers.size();
	return (long long) numbers[n-2]*numbers[n-1];
	
}

int main() {
	int n;
	cin >> n;
	vector<int> numbers(n);
	for (int i = 0; i < n; ++i) {
		cin >> numbers[i];
	}
	long long product = MaxPairwiseProduct(numbers);
	cout << product << "\n";
	return 0;
}
