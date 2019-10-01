#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,x,y,z;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&b);
        x=(a+1)/2;
        y=b-x;
        if(a%2==0)
           z=x-y;
            else
            z=x-y-1;
        printf("%d\n",max(0,z));
    }
}

