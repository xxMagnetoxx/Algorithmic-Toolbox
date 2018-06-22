#include <bits/stdc++.h>
using namespace std;

long long get_pissano_period(long long m)
{
	int i = 0;
	long long first = 0, second = 1, next;
	
	do{
		next = (first + second) % m;
		first = second;
		second = next;
		i++;
	}while(first != 0 && second != 1);
	return i + 1;
}

long long get_fib_huge(long long n, long long m)
{
	int i = 0;
	//long long new_n = n % get_pissano_period(m);
	long long first = 0, second = 1, next;
	
	do{
		next = (first + second) % m;
		first = second;
		second = next;
		i++;
	}while(i <= n % get_pissano_period(m));

	return next % m;
}

int main(int argc, char const *argv[])
{
	long long n, m;
	cin >> n >> m;
	cout << get_fib_huge(n, m) << endl;
	return 0;
}