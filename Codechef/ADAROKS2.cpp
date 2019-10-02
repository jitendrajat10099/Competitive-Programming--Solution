#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.14
typedef long long int ll;
/*
 .d8b.  d8888b. db    db  .d8b.  d8b   db 
d8' `8b 88  `8D `8b  d8' d8' `8b 888o  88 
88ooo88 88oobY'  `8bd8'  88ooo88 88V8o 88 
88~~~88 88`8b      88    88~~~88 88 V8o88 
88   88 88 `88.    88    88   88 88  V888 
YP   YP 88   YD    YP    YP   YP VP   V8P 
                                          
                                          
*/


///////////////////////////////////////
bool arr[1001];
ll calculate()
{
    if(arr[0]!=0)
    {
        arr[0]=0;
        return 0;
    }
    for(ll i=1000;i>=0;i--)
        if(arr[i]==0)
        {
            arr[i+1]=false;
            return i+1;
        }
    return 0;
}
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    for(ll i=0;i<sizeof(arr);i++)
    {
        arr[i]=1;
    }
    bool check[n][n];
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
            check[i][j]=0;
    }
    //memset(a,0,sizeof(a));
    ll k=0;
    ll x=0,y=-1;
    ll temp=8*n,i=0,j=0,u=0;
    ll my[n]={0};
    while(x<temp)
    {
        u=u+calculate();
        my[k]=u;
        for(i=k-1;i>=0;i--)
            arr[my[k]-my[i]]=false;
        if(y==x)
        break;
        k++;
        y=x;
        for(i=u,j=0;j<n;i++,j++)
        {
            if(i>=n)
                break;
            check[i][j]=1;
            x++;
        }
    }
   // cout<<x<<endl;
    if(y==x)
    {
        bool db=false;
        for(j=n-1;j>=0;j--)
        {
            for(i=0;i<n;i++)
            {
                bool qk=false;
               if(!check[i][j])
                    {
                        ll r[n];
                        ll p=0;
                        for(ll q1=0;q1<n;q1++)
                        {
                            if(q1==i)
                                continue;
                            if(check[q1][j])
                                r[p++]=q1;
                        }
                        for(ll q1=0;q1<n;q1++)
                        {
                            if(q1==j)
                                continue;
                            if(check[i][q1])
                            {
                                for(ll q2=0;q2<p;q2++)
                                {
                                    if(check[r[q2]][q1])
                                    {
                                        qk=1;
                                        break;
                                    }
                                }
                            }
                            if(qk)
                                break;

                        }
                    
                    if(!qk)
                    {
                        check[i][j]=1;
                        x++;
                    }
                    if(x>=temp)
                    {
                        db=true;
                        goto A;
                    }
                    }
                }
            }
        }
        A:
      // cout<<x<<endl;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(check[i][j]==1)
                    cout<<'O';
                else
                    cout<<".";
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
return 0;
}
