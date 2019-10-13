/*
GITHUB
https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/binary-movement/description/

*/
#include <iostream>
using namespace std;
int main() 
{
    
    int n,q,l,r,i,a[1000002],count=0;
    int b[1000002]={};
    cin>>n;
    for(i=1;i<=n;i++)
    cin>>a[i];
    
    cin>>q;
    //constant time range operation
    while(q--)
    {
        cin>>l>>r;
        b[l]+=1;
        b[r+1]-=1;
    }
 
    // prefix array will show number added 
    //if element of prefix is odd change original array
    for(i=1;i<=n;i++)
    {
        b[i]=b[i-1]+b[i];
        if(b[i]%2!=0)
        a[i]=(a[i]+1)%2;
        
        if(a[i]==1)
        count++;
        
    }
    cout<<count<<endl;
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
}
