/*
   Link - https://www.hackerrank.com/contests/projecteuler/challenges/euler005/problem
*/

#include <bits/stdc++.h>
using namespace std;

int A[10000000];

typedef long long int ll;
 
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll findlcm(int arr[], int n)
{

    ll ans = arr[0];

    for (int i = 1; i < n; i++)
        ans = (((arr[i] * ans)) /
                (gcd(arr[i], ans)));
 
    return ans;
}

int main(){
    int t,i;
    ll ans;
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            A[i]=i+1;
        }
        ans=findlcm(A,n);
        printf("%lld\n",ans);
    }
    return 0;
}
