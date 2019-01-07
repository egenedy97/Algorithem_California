#include <bits/stdc++.h>
using namespace std;

int main() {
	map <string , string >mymap;
	int n,m=0; cin>>n;
	mymap.insert ( pair<string,string>("purple","Power"));
	mymap.insert ( pair<string,string>("blue","Space"));
		mymap.insert ( pair<string,string>("orange","Soul"));
		mymap.insert ( pair<string,string>("yellow","Mind"));
	mymap.insert ( pair<string,string>("green","Time"));
	
	mymap.insert ( pair<string,string>("red","Reality"));
	

	string s1 , s2 ;
     for(int i=0;i<n ; i++)
     {
    	 cin>>s1;
    	 mymap.erase(s1);
    	 m++;
     }
     map <string , string >::iterator it = mymap.begin();
     cout<<6-m<<endl;
     for (it=mymap.begin(); it!=mymap.end(); ++it)
      cout << it->second << '\n';
    return 0;
}

