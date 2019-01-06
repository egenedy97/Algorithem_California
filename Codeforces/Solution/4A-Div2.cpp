#include<cstdio>
int n;
int main()
{
    scanf("%d",&n);
    puts((n%2==0)&&(n>2)?"YES":"NO");
}