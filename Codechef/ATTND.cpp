#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.14
typedef long long int ll;
/*
 .d8b.  d8888b. db    db  .d8b.  d8b   db 
d8' `8b 88  `8D `8b  d8' d8' `8b 888o  88 
88ooo88 88oobY'  `8bd8'  88ooo88 88V8o 88 
88~~~88 88`8b      88    88~~~88 88 V8o88 
88   88 88 `88.    88    88   88 88  V888 
YP   YP 88   YD    YP    YP   YP VP   V8P 
                                          
                                          
*/


///////////////////////////////////////
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll t,n,pos,i,j,c=0;
cin>>t;
while(t--)
{
    c=0;
    string s[105];
    string s2[105];
    string s1;
    cin>>n;
    
    for(i=0;i<n+1;i++)
        {
            fflush(stdin);
            getline(std::cin,s1);
            s[i]=s1;
            //cout<<s1<<endl;
            pos=s[i].find(" ");
            //cout<<pos<<endl;
            s2[i]=s[i].substr(0,pos);
            //cout<<s2[i]<<endl;
            

        }
    for(i=1;i<n+1;i++)
    {
        c=0;
        for(j=1;j<n+1;j++)
        {
            if(s2[i].compare(s2[j])==0)
                {c++;
                    if(c>=2)
                    break;}
        }
        if(c==2)
            cout<<s[i]<<endl;
        else
            cout<<s2[i]<<endl;
        
    }

}
}
