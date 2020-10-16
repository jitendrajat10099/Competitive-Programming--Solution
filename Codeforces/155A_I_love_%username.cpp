//code by Nikhil Nagrale
//nikhilnagrale2 on EveryPlatform
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int min=v[0],max=v[0],ans=0;
    for(auto x:v){
        if(x>max){
            max=x;
            ans++;
        }
        if(x<min){
            min=x;
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}