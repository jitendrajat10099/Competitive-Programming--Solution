/*
Problem link- https://www.codechef.com/SEPT19A/problems/CHEFK1
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long int lld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lld t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(m<n-1 || m>((n*(n+1))/2))
        cout<<"-1"<<endl;
        else
        if(n==2 && m==1)
        cout<<"1"<<endl;
        else
        if(n==1 && m==0)
        cout<<"0"<<endl;
        else
        if(n==1 && m==1)
        cout<<"1"<<endl;
        else
        if(m>=n-1 && m<=n+1)
        cout<<"2"<<endl;
        else 
        if(m>n+1 && m<+2*n)
        cout<<"3"<<endl;
        else
        {  lld ctr=3;
            {
            if(n%2!=0)
            {
                m=m-2*n;
                if(m%n==0)
                cout<<ctr+2*(m/n)<<endl;
                else
                {
                     if(m%n>n/2)
                    cout<<ctr+2*(m/n)+2<<endl;
                    else
                        cout<<ctr+2*(m/n)+1<<endl;
                    
                }
            }
            else
            {
                m=m-2*n;
                if(m%n==0)
                cout<<ctr+2*(m/n)<<endl;
                
                else
                {
                    if(m%n>n/2)
                    cout<<ctr+2*(m/n)+2<<endl;
                    else
                 cout<<ctr+2*(m/n)+1<<endl;
                }
            }
        }

		}
    }
    return 0;
}
