#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int n;
    cin >> n;
    long long int ar[n];
    long long int sum=0;
    long long int count=0;
    for(long long int i=0;i<n;i++){
        cin >> ar[i];
        if(ar[i]>=0){
            sum+=ar[i];
            count++;
        }
    }
    if(count!=0){
       cout << sum << " " << count << endl;
    }
    else {
        long long int tem=*max_element(ar,ar+n);
        cout << tem << " " << 1 << endl;
    }
}