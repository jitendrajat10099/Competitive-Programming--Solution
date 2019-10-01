#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{

    int t,n,x,i,sum,c;
    char s[1000005];
    scanf("%d",&t);
    while(t--)
    {
        sum=0;
        map<int,int>a;
        scanf("%d %d",&n,&x);
        fflush(stdin);
        scanf("%s",&s);
        c=x;
        a[c]++;
        for(i=0;i<strlen(s);i++)
        {
            if(s[i]=='R')
            {
                c++;
                if(a[c]==0)
                a[c]++;
            }
            else if(s[i]=='L')
            {
                c--;
                if(a[c]==0)
                a[c]++;
            }

        }
        for(auto const&x:a)
            sum=sum+x.second;
            printf("%d\n",sum);
            a.clear();

    }

}

