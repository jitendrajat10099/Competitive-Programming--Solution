/*  Link to the problem: https://www.codechef.com/problems/CATSDOGS/ */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    long long int c,d,l;
    cin>>c>>d>>l;
    if(l<=(c+d)*4&&l>=(c-d)*4&&l>=d*4&&l%4==0)
    {
        cout<<"yes"<<endl;

    }

else
{
   cout<<"no"<<endl;
}
    }
    return(0);
}
