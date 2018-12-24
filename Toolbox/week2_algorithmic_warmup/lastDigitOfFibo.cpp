#include <bits/stdc++.h> 
using namespace std;  
int lastDigit(long long n )
{
    if(n<=1)
        return n ; 
	vector<long long> arr(n+1);    
    arr [0] = 0 ; 
    arr [1] =1 ;
    for(int i = 2 ; i <= n ; i++)
    {
        arr[i] = ((arr[i-1]%10) + (arr[i-2]%10))%10 ; 
    }
    // int r =arr[n]%10 ;
    // cout<< arr[n]<<endl  ; 
    return arr[n] ; 
}
// int fib(int n )
// {
//     if(n<=1)
//     {
//         fib(n) = n ; 
//     }
//     else{
//         return fib(n-1)+fib(n-2)
//     }
// }
int main()
{
    long long n  ; 
    cin >> n;
    cout<<lastDigit(n)<<endl ;  
    // long long arr[n+1] ; 
    // arr [0] = 0 ; 
    // arr [1] =1 ;
    // for(int i = 2 ; i <= n ; i++)
    // {
    //     arr[i] = arr[i-1] + arr[i-2] ; 
       
    // }
    // cout<< arr[n]<<endl  ; 
}