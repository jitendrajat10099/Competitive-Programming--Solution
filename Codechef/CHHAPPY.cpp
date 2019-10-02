#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,i,j,n,c,x,y,k,e,f,g;
    int a[100000];
    int b[100000];
    scanf("%d",&t);
    while(t--)
    {
        c=0;
        scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);

}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]==a[j])
        {
            x=i+1;
            y=j+1;
            g=0;
            e=0;
            f=0;
            
            for(k=0;k<n;k++)
                {
                    if(a[k]==x)
                        e++;
                    if(a[k]==y)
                        f++;
                        
                        if(e>=1 && f>=1)
                    {g=1;break;}
                }
            if(g==1)
            c=1;

        }
    }
}
if(c==1)
    printf("Truly Happy\n");
else
    printf("Poor Chef\n");
    }
}

