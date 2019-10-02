#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int Arr[n];
        int pn=0,nn=0;
        for(int j=0;j<n;j++)
        {
            cin>>Arr[j];
            if(Arr[j]>=0)
                pn++;
            else if(Arr[j]<0)
                nn++;
        }
    if(pn>nn&&nn!=0)
    cout<<pn<<" "<<nn<<endl;
    else if(pn==0)
    cout<<nn<<" "<<nn<<endl;
    else if(nn>pn&&pn!=0)
    cout<<nn<<" "<<pn<<endl;
    else 
    cout<<pn<<" "<<pn<<endl;
    }
}
