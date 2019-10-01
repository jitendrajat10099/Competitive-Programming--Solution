#include<bits/stdc++.h>
#define lld long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        lld n;
        cin>>n;
        
        lld a[n];
        
        for(int i=0;i<n;i++)
        cin>>a[i];
        
    
        lld minl[n],minr[n],maxl[n],maxr[n];
        minl[0]=a[0];
        
        maxr[n-1]=a[n-1];
        for(int i=n-2;i>=0;i--)
        {
            maxr[i]=max(a[i],a[i]+maxr[i+1]);
        }
    

        minr[n-1]=a[n-1];
        for(int i=n-2;i>=0;i--)
        {
            minr[i]=min(a[i],a[i]+minr[i+1]);
        }
        
    
        maxl[0]=a[0];
        for(int i=1;i<n;i++)
        {
            maxl[i]=max(a[i],a[i]+maxl[i-1]);
        }
    
     
        minl[0]=a[0];
        for(int i=1;i<n;i++)
        {
            minl[i]=min(a[i],a[i]+minl[i-1]);
        }
     
        lld maxsum=-1000000000000000000;
        
        for(int i=0;i<n-1;i++)
        {
            maxsum=max(maxsum,(maxl[i]-minr[i+1]));
        }


        for(int i=n-1;i>0;i--)
        {
            maxsum=max(maxsum,(maxr[i]-minl[i-1]));
        }
        
cout<<maxsum<<"\n";
    }
    return 0;
}
