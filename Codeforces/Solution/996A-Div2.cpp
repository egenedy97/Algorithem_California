#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,countn=0, countm= 0, counto= 0,countp= 0, countq=0; ; cin >>n;
   if(n>=100)
   {
	   while (n>=100)
	   {
		   n=n-100;
		   countn++;
	   }
   }
   if(n>=20)
      {
   	   while (n>=20)
   	   {
   		   n=n-20;
   		   countm++;
   	   }
      }
   if(n>=10)
         {
      	   while (n>=10)
      	   {
      		   n=n-10;
      		   counto++;
      	   }
         }
   if(n>=5)
         {
      	   while (n>=5)
      	   {
      		   n=n-5;
      		   countp++;
      	   }
         }
   if(n>=1)
         {
      	   while (n>=1)
      	   {
      		   n=n-1;
      		   countq++;
      	   }
         }
   cout<<countn+countm+counto+countp+countq;
}