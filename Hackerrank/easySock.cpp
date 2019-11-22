#include <bits/stdc++.h>
#include<algorithm>

using namespace std;
int main()
{       int n,count=0;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        cin>>ar[i];
        sort(ar,ar+n);
        for(int j=0;j<n;j++)          // 1,2,2,3
         {
           if(ar[j]==ar[j+1])
           { count++; j++;}    
        }
        cout<<count;
        return 0;
}