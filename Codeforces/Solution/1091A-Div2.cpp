#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int y,b,r;
	cin>>y>>b>>r;
	cout<<min(min(y+1,b),r-1)*3;
    return 0;
}