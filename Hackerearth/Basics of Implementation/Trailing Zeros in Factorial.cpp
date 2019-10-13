/*
problem link - https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/trailing-zeroes-in-factorial/

some useful links -
https://www.purplemath.com/modules/factzero.htm
https://www.geeksforgeeks.org/numbers-whose-factorials-end-with-n-zeros/
https://stackoverflow.com/questions/43911621/finding-natural-numbers-having-n-trailing-zeroes-in-factorial

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int trailingzero(int n)
{
    int count=0;
    int p=5;
    while(p<=n)
    {
        count += n/p;
        p*=5;
    }
    return count;
}
void search(int n)
{
    int low=4*n;
    int high=5*n;
    
    while(low<high)
    {
        int mid=(low+high)/2;
        int count=trailingzero(mid);
        if(count<n)
        low=mid+1;
        else
        high=mid;
    }
    if(trailingzero(low)!=n)
    cout<<0<<endl;
    else
    {
        cout<<5<<endl;
        for(int i=low;i<low+5;i++)
        cout<<i<<" ";
        cout<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t,m,i;
    cin>>t;
    while(t--)
    {
        cin>>m;
        search(m);
    }    
}
