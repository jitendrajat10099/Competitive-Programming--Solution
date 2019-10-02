#include<stdio.h>
#include<math.h>
int main()
{
    long long int t,n,i,ans,r;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        for(i=0;;i++)
        {
         if(n>=pow(2,i)&&n<=pow(2,i+1))
         {
             r=n%(long long int)(pow(2,i));
             break;
         }
        }
        ans=n-r;
        printf("%lld\n",ans);
    }

}

