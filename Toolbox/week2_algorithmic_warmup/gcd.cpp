#include <iostream> 
// # define long long ar ll ;
using namespace std ; 

long long gcd(long long a, long long b){
	if(a < b){
		long long m = a;
		a = b;
		b = m;
	}
	// a is > b always
	if (b == 0){
		return a;
	}
	else{
		return gcd(b,a%b);
	}
}
// long long gcd(long long a , long long b )
// {
    // if (b == 0 )
    // {
        //return a ;
    // }
    // long long a1 =a % b ;
    // return gcd( b , a1);
// }
int main()
{
    int n, m ;
    cin >> n >> m ;
    cout<<gcd(n , m );
    return 0;
}