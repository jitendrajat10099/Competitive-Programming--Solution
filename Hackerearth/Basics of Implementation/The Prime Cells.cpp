/*
https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/pythagorean-triangles-0158a4c5/
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int prime(int n)
{
    if(n==2 || n==3)
    return 1;
    for(int i=2;i*i<=n;i++)
    if(n%i==0)
    return 0;
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,a[102][102]={},i,j,count=0;
    cin>>n;
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    cin>>a[i][j];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            int sum = a[i-1][j]+a[i+1][j]+a[i][j+1]+a[i][j-1];
            if(prime(sum))
            count++;
        }
    }
    
    cout<<count;
     
}
