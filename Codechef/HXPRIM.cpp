#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    int b[100010]={0};
        bool prime[100010];int c=0,i;
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=100010; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*p; i<=100010; i += p)
                prime[i] = false;
        }
    }
    prime[0]=prime[1]=false;
    for(i=1;i<=100000;i++)
    {
        if(prime[i]==true && prime[i+6]==true)
            c++;
        b[i]=c;
    }
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d",&n);
    printf("%d\n",b[n]);
    }
}

