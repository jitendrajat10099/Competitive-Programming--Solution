/*
Problem Link:- https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/balanced-brackets-3-4fc590c6/
*/

#include <bits/stdc++.h>

using namespace std;

void check(char str[],char stack[],int n)
{
    int i,j,k,top=-1;
    
    for(i=0;i<n;i++)
    {
        if(str[i]=='(' || str[i]=='[' || str[i]=='{')
        {
            top+=1;
            stack[top]=str[i];
        }
        else
        {
            if(str[i]==')' && stack[top]=='(')
            {
                top--;
            }
            else if(str[i]=='}' && stack[top]=='{')
            {
                top--;
            }
            else if(str[i]==']' && stack[top]=='[')
            {
                top--;
            }
            else 
            top=-2;
            
            if(top<-1)
            break;
        }
    }
    
    if(top==-1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    
}
int main() {
	int n,top;
	
	cin >> n;	
	char stack[1000],str[1000];
	while(n!=0)
	{
	    cin>>str;
	    if(strlen(str)%2==0)
	    {
	    top=-1;
	    check(str,stack,strlen(str));
	    }
	    else
	    cout<<"NO"<<endl;
	    
	    n--;
	    
	}
	return 0;
}