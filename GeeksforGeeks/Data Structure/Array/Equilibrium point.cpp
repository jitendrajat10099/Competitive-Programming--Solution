/*
https://practice.geeksforgeeks.org/problems/equilibrium-point/0
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t,i,n,a[1000001],temp;
    cin>>t;
    while(t--)
    {
        bool flag=true;
        cin>>n;
        a[0]=0;
        for(i=1;i<=n;i++)
        { cin>>temp;
            a[i]=a[i-1]+temp;
        }
        for(i=1;i<=n;i++)
        {
            if(a[i-1] == (a[n]-a[i]) )
            {
                cout<<i<<endl;
                flag=false;
                break;
            }
        }
        if(flag)
         cout<<-1<<endl;
    }
    return 0;
}
