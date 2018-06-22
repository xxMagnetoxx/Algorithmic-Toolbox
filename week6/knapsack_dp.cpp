#include <bits/stdc++.h>
using namespace std;

int max_weigth(vector<int> weights, int W)
{
	int n = weights.size();
	int values[n+1][W+1];
	for (int i = 0; i <= n; i++) 
	{
  		values[i][0] = 0;
  	}
  	for (int i = 0; i <= W; i++) 
  	{
    	values[0][i] = 0;
  	}
	
  	for (int i = 1; i <= n; i++) 
  	{
  		for (int j = 1; j <= W; j++) 
  		{
  		  	if (j - weights[i - 1] >= 0) 
  	  		{
  	  			values[i][j] = max(values[i - 1][j], values[i - 1][j - weights[i - 1]] + weights[i - 1]);
  	  		} 
  	  		else 
  		  	{
	  	  		values[i][j] = values[i - 1][j];
  	  		}
  		}
  	}

  	return values[n][W];

}

int main(int argc, char const *argvalues[])
{
	int W, n;
	cin >> W >> n;
	vector<int> weights(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> weights[i];
	}

	cout << max_weigth(weights, W);

	return 0;
}