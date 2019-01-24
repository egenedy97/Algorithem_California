#include<bits/stdc++.h>

using namespace std;

const int N = 1e4 + 8;
int n , a[N] , mark[N] , y , x;

int main()
{
	cin >> n;
	for(int i = 0 ; i < n ; i++)
		cin >> a[i] , mark[a[i]]++;
	sort(a , a + n);
	x = a[n - 1];
	for(int i = 0 ; i < n ; i++)
	{
		if(x % a[i] != 0 || mark[a[i]] > 1)
			y = a[i];
	}
	cout << x << " " << y;
}
