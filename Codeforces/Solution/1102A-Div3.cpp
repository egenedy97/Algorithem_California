#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int n ; 
    cin >> n;  
    // float to = 2
    int to = 2 ; 
    int sum = 0 ; 
    int arr[n]  ; 
    int ans[20] = {1,3,6,10,5,11,8,16,15,5,6,8,11,5,10,6,13,11,10,0};
    // for(int i =0 ; i < n ; i++)
    // {
    //     arr[i] = i+1 ;
    //     sum = (sum%10) +(arr[i]%10) ; 
    //     cout <<sum<<endl ;
    // }
    if(n>20)
    {
        n = n % 20 ;
        n = ans[n-1] ; 

    }
    else{
        n = ans[n-1] ; 
    }
    // cout<<"n "<<n<<" * "<<endl;
    if (n % 2 == 0 )
        {
            cout << "0" ;
        }

    else 
        cout << "1" ;
    return 0 ;
}