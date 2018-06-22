#include <bits/stdc++.h>
using namespace std;

int edit_distance(const string &a, const string &b)
{
	int n = a.size(), m = b.size();
	int table[n+1][m+1];

	for (int i = 0; i < n; ++i)
	{
		table[i][0] = i;
	}
	for (int i = 0; i < m; ++i)
	{
		table[0][i] = i;
	}

	//int insertion = 0, deletion = 0, match = 0, mismatch = 0;
	/*for(int i = 1; i <= m; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			int insertion = table[i][j-1] + 1;
			int deletion = table[i-1][j] + 1;
			int match = table[i-1][j-1];
			int mismatch = table[i-1][j-1] + 1;
			
			if(a[i-1] == b[j-1])
				table[i][j] = min(min(insertion, deletion), match);
			else 
				table[i][j] = min(min(insertion, deletion), mismatch);
		}
	}*/

	int cost = 0;
	for(int i = 1; i <= n; ++i) 
	{
		for(int j = 1; j <= m; ++j) 
		{
			if(a[i-1] == b[j-1])
				cost = 0;
			else
				cost = 1;
			table[i][j] = std::min(std::min(table[i-1][j],table[i][j-1]) + 1, table[i-1][j-1] + cost);
		}
	}
	return table[n][m];
}

int main(int argc, char const *argv[])
{
	string a, b;
	cin >> a >> b;
	cout << edit_distance(a, b);

	return 0;
}
