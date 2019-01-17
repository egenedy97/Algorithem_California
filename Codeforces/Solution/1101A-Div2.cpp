#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
main(){
ll l,r,x,d;
ll n;
cin>>n;
while(n--){
cin>>l>>r>>d;
if(d<l or d>r)
	cout<<d<< endl;
else{
cout<<(r+d)-(r+d)%d<< endl;
}

}
}