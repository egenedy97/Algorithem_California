#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y; cin>>x>>y;
    long double a=y*logl(x);
    long double b=x*logl(y);
    cout<<((x==y || a==b) ? '=' : a<b ? '<' : '>')<<endl;
}