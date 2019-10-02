#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long n,arr[100002]={0},i,a[100001]={0},b[100001]={0},k,x,y,c=0,d=0,ans=0,p,q;
        cin>>n>>k;
        vector<pair<long,long> >v;
        for(i=0;i<n;i++)
        {
            cin>>x>>y;
            arr[x]+=1;
            arr[y+1]-=1;
            v.push_back({x,y});
        }
        for(i=2;i<=100000;i++)
        {
            arr[i]=arr[i-1]+arr[i];

        }
        for(i=1;i<=100000;i++)
        {
            if(arr[i]==k)
                c++;
            a[i]=c;
            if(arr[i]==k+1)
                d++;
            b[i]=d;
        }
        for(i=0;i<v.size();i++)
        {
           x=v[i].first;
           y=v[i].second;
           p=a[y]-a[x-1];
           q=b[y]-b[x-1];
           ans=max(ans,c-p+q);
        }
        cout<<ans<<endl;
    }
}
