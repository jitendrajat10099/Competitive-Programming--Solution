#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    int freq[k]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        int mod=a[i]%k;
        freq[mod]++;
    }
    int cnt=0;
    if(freq[0]>0)
    cnt++;
    if(k%2!=0)
    {for(int j=1;j<=k/2;j++)
    {
        if(freq[j]!=0&&freq[k-j]!=0)
        {
            cnt+=max(freq[j],freq[k-j]);
        }
        else if(freq[j]==0&&freq[k-j]!=0)
        {
            cnt+=freq[k-j];
        }
        else if(freq[j]!=0&&freq[k-j]==0)
            {
            cnt+=freq[j];
        }
    }
    }
    else
        {  if(freq[k/2]>0)
        cnt++;
            for(int j=1;j<k/2;j++)
    {
        if(freq[j]!=0&&freq[k-j]!=0)
        {
            cnt+=max(freq[j],freq[k-j]);
        }
        else if(freq[j]==0&&freq[k-j]!=0)
        {
            cnt+=freq[k-j];
        }
        else if(freq[j]!=0&&freq[k-j]==0)
            {
            cnt+=freq[j];
        }
    }
    }
   cout<<cnt;
  return 0;
}
