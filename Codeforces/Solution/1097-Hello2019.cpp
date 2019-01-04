#include <bits/stdc++.h>
using namespace std; 
int main()
{
    string hand; 
    cin>>hand ; 
    string arr[5] ; 
    int a ;
    int b ; 
    for(int i =0 ; i < 5 ; i++)
    {   
        cin >> arr[i] ; 
        // cout <<arr[i]<<endl; 
    }
    for(int i =0 ; i < 5 ; i++)
    {   
         a = arr[i].find(hand[0]) ; 
         b = arr[i].find(hand[1]) ; 
        //  cout<<a<<" "<<b<<endl;
        if(a != -1 || b != -1 )
        {
            cout<<"YES" ; 
            break; 
        }
        
    }
     if(a == -1 && b == -1 )
        {
            cout<<"NO" ; 
        }
    return 0;
}