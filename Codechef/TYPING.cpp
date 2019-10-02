#include<string.h>
#include<iostream>
#include <stdio.h>
using namespace std;
int main()
{
    string b[10000];
    string str1,str;
    char ch;
    int i,j,t1,n,n1,ne,t;
    double ti=0.0,sum1=0.0;
    double sum[10000];
    scanf("%d",&t1);
    while(t1--)
    {
        ti=0.0,sum1=0.0;
        for(i=0;i<10000;i++)
           sum[i]=0.0;
        scanf("%d",&n);
n1=n;
        while(n--)
        {
            ti=0.2;
            cin>>b[n];
            str1=b[n];
            for(i=0;i<(str1.length()-1);i++)
            {
                if(str1.at(i)=='d' || str1.at(i)=='f')
                {
                  if(str1.at(i+1)=='d' || str1.at(i+1)=='f')
                        ti=ti+0.4;
                  else
                    ti=ti+.2;
                }
                else
                {
                  if(str1.at(i+1)=='j' || str1.at(i+1)=='k')
                  ti=ti+.4;
                  else
                    ti=ti+.2;
                }
            }
            sum[n]=ti;

        }
                for(i=n1-1;i>=0;i--)
            {
                for(j=i-1;j>=0;j--)
                {
                    if(b[i].compare(b[j])==0)
                       {
                        sum[j]=sum[j]/2.0;
                        break;
                       }
                 }
              }
              for(i=0;i<n1;i++)
              {
                sum1=sum1+sum[i];
              }
              printf("%d\n",int(sum1*10+.1));
}
}

