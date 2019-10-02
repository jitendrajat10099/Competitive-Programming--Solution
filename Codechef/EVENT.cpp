#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int t,c,d,e,f,g,i,counter,k;
    scanf("%d",&t);
    string a,b;
    string days[7]={"saturday","sunday","monday","tuesday","wednesday","thursday","friday"};
    while(t--)
    {
        counter=0;
      cin>>a>>b>>c>>d;

    for(i=0;i<7;i++)
    {
        if(a.compare(days[i])==0)
        e=i+1;
    if(b.compare(days[i])==0)
        f=i+1;
    }
    if(e<=f)
        g=(f-e)+1;
    else
        g=7-e+f+1;
        if(g==7)
            g=0;
for(i=c;i<=d;i++)
{
    if(i%7==g)
        {counter++;k=i/7;}
}
if(counter==1)
    printf("%d\n",g+(k)*7);
else if(counter>1)
    printf("many\n");
else
    printf("impossible\n");
}
}
