#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()

{
	string fs,s[3] ;
	for(int i = 0 ;i<3 ; i++)
	{
		cin>>s[i] ;
		fs = s[i] ;
		if(fs[1] == '<')
		{
	        reverse(fs.begin(), fs.end());
	        fs[1] = '>' ;
	        s[i] = fs ;
		}
	}

	int count[3] = {0,0,0} ;
	char ch[3] = {'A' , 'B' ,'C'};
	char sh[3] ;
	for(int i = 0 ; i< 3 ; i++)
	{
		fs = s[i] ;
		if(ch[0] == fs[0])
		{
			count[0]++;

		}
		else if (ch[1] == fs[0])
		{
			count[1]++ ;
		}
		else if (ch[2] == fs[0])
		{
			count[2]++;
		}
	}
	for(int i = 0 ; i< 3 ; i++)
	{
		sh[count[i]] = ch[i] ;
	}
	if (sh[0] == NULL || sh[1] == NULL || sh[2] == NULL)
	{
		cout<<"Impossible" ;
	}else
	{
		cout <<sh[0] <<sh[1] <<sh[2] <<endl ;
	}
//	return 0 ;
}