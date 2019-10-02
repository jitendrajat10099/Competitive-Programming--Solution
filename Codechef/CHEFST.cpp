#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main()
{
    long long int t,m1,n1,n2,m,m2;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld",&n1,&n2,&m);
        m1=min(n1,n2);
        m2=min(m1,m);
m=(m*(m+1)/2);
if(m1<=m)
    printf("%lld\n",(abs(n1-n2)));
else
    printf("%lld\n",(n1+n2-m*2));
        }
    }



