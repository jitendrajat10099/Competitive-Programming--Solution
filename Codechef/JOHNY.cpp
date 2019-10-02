#include <stdio.h>
#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t,n,i,k,d;
    scanf("%d",&t);
    while(t--)
    {
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&k);
    d=a[k-1];
     sort(a,a+n);
     for(i=0;i<n;i++)
     {
         if(a[i]==d)
         {printf("%d\n",(i+1));
         break;
         }
     }
    }
}

