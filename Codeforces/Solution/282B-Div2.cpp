#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,c=0,y,z;
    string s="";
    cin>>x;
    while(x--)
    {
        cin>>y>>z;
        if(c+y>500)
        {
            c-=z;
            s+="G";
        }
        else
        {
           c+=y;
           s+="A";
        }
        if (c>500||c<-500) {
            cout<<-1;
            break;
        }
    }
    cout<<s;
}