#include <iostream>

#include <algorithm>
using namespace std;

int main()
{
    int steps, m=0;
int n=0;
    cin>>steps;

    do{

        n=n+5;
        m++;


    }while(steps>n);
    cout<<m;


}