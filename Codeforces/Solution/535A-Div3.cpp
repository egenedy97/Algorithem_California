#include <bits/stdc++.h>
using namespace std ; 
int main()
{
    int n ; 
    cin >> n;  
    int l1,r1,l2,r2;
    int v1 =0 , v2 =0;
    for(int i = 0;i<n ; i++)
    {
        cin>>l1>>r1>>l2>>r2 ; 
       //coincide 
       if(r1 == l2 || r2 == l1)
       {
           v1 = (l1+r1)/2 ; 
           v2 = (l2+r2)/2 ; 
       }
       //overlape
       else if(r1 == r2 && l1 ==l2 )
       {
            v1 = (l1+r1)/2 ; 
            v2 = ((l2+r2)/2)+1 ; 
       }
       //intersect
       else if(r1>=l2 && r2 >= r1)
       {
           v1 = (l1+r1)/2 ;
           v2 = (l2+r2)/2 ; 
           if(v1 == v2)
           {
                v2++;
           }
       }
       else if(r1>=l2 && r2 < r1 )
       {
           v1 = (l1+r1)/2 ;
           v2 = (l2+r2)/2 ; 
           if(v1 == v2)
           {
                v1++;
           }
       }else if(r1 <= l2 || r2 <=l1  )
       {
           v1 = (l1+r1)/2 ;
           v2 = (l2+r2)/2 ; 
       }
       cout<<v1 <<" "<<v2<<endl;
    }
    return 0; 
}