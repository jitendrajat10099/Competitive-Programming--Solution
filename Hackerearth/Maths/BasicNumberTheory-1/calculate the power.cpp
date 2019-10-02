#include<iostream>
using namespace std;
int main()
{
    unsigned long long int x , n;
    cin>>x>>n;
    long long ans = 1;
    while(n>0)
    {
        if(n%2==1)
        ans = (ans*x)%1000000007;
        x= (x*x)%1000000007;
        n/=2;
    }
    cout<<ans<<endl;
}
