/*
    Problem Link: https://practice.geeksforgeeks.org/problems/longest-valid-parentheses/0
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;

		stack<int> s;
		s.push(-1);
		int res=0;
		for(int i=0;i<str.length();i++){
			if(str[i]=='('){
				s.push(i);
			}else{
				s.pop();
				if(s.empty()){
					s.push(i);
				}else{
					res = max(res,i-s.top());
				}
			}
		}
		cout<<res<<endl;
	}
}
