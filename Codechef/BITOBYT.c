#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,bi=1,ni=0,by=0,c=0;

        scanf("%lld",&n);
     while(n--)
        {

            if(c==2)
            {
               ni=bi;
               bi=0;

            }

           if(c==10)
               {
                    by=ni;
                    ni=0;
               }

            if(c==26)
                 {
                   bi=by*2;
                    by=0;
                    c=0;
                 }
                 c++;


          }
        printf("%lld %lld %lld\n",bi,ni,by);
    }
    return 0;
}

