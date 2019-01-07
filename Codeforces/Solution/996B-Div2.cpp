#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<long long>a(n);
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		a[i] = ceil(((a[i]-i)*1.0)/n);
	}
	int lowest = 0;
	for(int i=1;i<n;i++){
		if(a[i]<a[lowest]){
			lowest = i;
		}
	}
	cout << lowest+1 << endl;
}