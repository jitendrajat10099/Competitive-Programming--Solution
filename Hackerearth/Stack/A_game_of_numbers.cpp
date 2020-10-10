/*
Problem Link:- https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/a-game-of-numbers-1-5d3a8cb3/
*/

#include<bits/stdc++.h>
using namespace std;

vector<long long> solution (vector<long long> a) {
   int n=a.size(),i,j,k,max,min,f;
   vector<long long> v;
   for(i=0;i<n;i++)
   {
       max=i;
       for(j=i+1;j<n;j++)
       {
           if(a[j]>a[i])
           {
             max=j;
             break;
           }
       }
       
       if(j==n && max==i)
       {
           v.push_back(-1);
       }
       else
       {
       f=0;
        for(j=max+1;j<n;j++)
                 {
           if(a[j]<a[max])
           {
             max=j;
             f=1;
             
             break;
           }
                }
           if(f)
                v.push_back(a[max]);
           else
           v.push_back(-1);
           
       }
       
   }
   
   return v;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<long long> A(N);
    for(int i_A=0; i_A<N; i_A++)
    {
    	cin >> A[i_A];
    }

    vector<long long> out_;
    out_ = solution(A);
    cout << out_[0];
    for(int i_out_=1; i_out_<out_.size(); i_out_++)
    {
    	cout << " " << out_[i_out_];
    }
}