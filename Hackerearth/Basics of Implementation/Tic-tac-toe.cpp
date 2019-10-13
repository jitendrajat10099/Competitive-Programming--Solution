/*
https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/tic-tac-toe-thingy-7ce8b17b/description/
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(char s[4][4],char c)
{
    int i,j;
    for(i=1;i<=3;i++)
     { if(s[i][1]==c && s[i][2]==c && s[i][3]==c)
    return true;
     }
    
    for(j=1;j<=3;j++)
    {
    if(s[1][j]==c && s[2][j]==c && s[3][j]==c)
    return true;
    }
    
    if(s[1][1]==c && s[2][2]==c && s[3][3]==c)
    return true;
    
    if(s[1][3]==c && s[2][2]==c && s[3][1]==c)
    return true;
    
    return false;
    
}
void error()
{
    cout<<"Wait, what?"<<endl;
    
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    char s[4][4];
    int i,j;
    int x=0;
    int o =0;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            cin>>s[i][j];
            if(s[i][j]=='X')
            x++;
            else if(s[i][j]=='O')
            o++;
        }
    }
    if((x-o)!=1 && (x-o)!=0)
    { 
        error();
        return 0;
    }
    if( check(s,'X') && check(s,'O') )
    {
        error();
        return 0;
    }
    if(check(s,'X'))
    { 
        if(x==o)
        {
            error();
        return 0;
        }
        cout<<"X won.";
    
    }
    else if(check (s,'O') )
    {
        if(x!=o)
        {
            error();
        return 0;
        }
    cout<<"O won.";
    }
    else
    {
        if(x+o==9)
        cout<<"It's a draw.";
        else if(x==o)
        cout<<"X's turn.";
        else if(x-o==1)
        cout<<"O's turn.";
    }
       
}
