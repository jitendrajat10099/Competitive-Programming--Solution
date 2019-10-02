#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    scanf("%d",&t);
    while(t--)
    {
        cin>>s;
        if(s.find("MUJ")!=std::string::npos)
            printf("YES\n");
        else
            printf("NO\n");

    }
}

