#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    cout << (m-n%m)*(n/m-1)*(n/m)/2+(n%m)*(n/m)*(n/m+1)/2 << " " << (n-m+1)*(n-m)/2 << endl;
}
