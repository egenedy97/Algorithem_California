#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t ;
	cin>>t;
	long long a, b , k ;
	for(int i =0  ; i< t ; i++)
	{
		cin>>a>>b>>k ;
		long long sum1 = a * (k-(k/2)) ;
		long long sum2 = b*(k/2);
		cout<<sum1-sum2<<endl ;
	}
	 return 0 ;
}
