/*

link of problem: https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/minimum-add-to-make-parentheses-valid-9cba6259/
solution: jignesh1604
*/

#include<iostream>
#include<stack>
using namespace std;
int main()
{
    string s;
    stack<char> stc;
    cin>>s;
    int i;
    for(i=0;i<s.size();i++)
    {
        if(stc.empty())
            stc.push(s[i]);
        else if(s[i]==')'&&stc.top()=='(')
            stc.pop();
        else
            stc.push(s[i]);
        
    }
    cout<<stc.size();
}
