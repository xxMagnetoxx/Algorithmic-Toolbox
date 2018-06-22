#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; ++i)
    {
    	cin >> v[i];
    }
    sort(v.rbegin(), v.rend());

    int element = v[0], count = 1;

    for (int i = 1; i < n; ++i)
    {
    	if(v[i] == element) 
    	{
    		count++;
    		if(count > n/2) break;
    	}
    	else 
    	{
    		element = v[i];
    		count = 1;
    	}
    }

    if(count > n/2) cout << 1;
    else cout << 0;

	return 0;
}