#include  <bits/stdc++.h>
using namespace std; 

int binary_search(vector<int> &arr, int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;
 
        if (arr[mid] == x)  
            return mid;
 
        if (arr[mid] > x) 
            return binary_search(arr, l, mid-1, x);
 
        return binary_search(arr, mid+1, r, x);
   }
 
   return -1;
}

int main(int argc, char const *argv[])
{
	int n, k;
	
	cin >> n;
    vector<int> a(n);
	for(int i = 0; i < n; i++) { cin >> a[i]; }
	
	cin >> k;
	vector<int> b(k);
	for(int i = 0; i < k; i++) { cin >> b[i]; }
	
	for (int i = 0; i < k; ++i)
	{
		int key = b[i];
		cout << binary_search(a, 0, n-1, key) << " ";
	}
	


	return 0;
}