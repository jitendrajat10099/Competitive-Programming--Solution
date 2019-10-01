#include<stdio.h>
#include<string.h>
int main()
{
    long long int t,n,c,i,x,y;
    long long int a[100000];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        memset(a,0,(n+8));
    a[0]=2*3;
    a[1]=3*7;
        a[2]=7;c=3;
        for(i=11;i<(100000);i=i+2)
        {
            if(i%3!=0 && i%5!=0 && i%7!=0 && i!=0)
            {
            a[c]=i;
            c=c+1;
            a[c]=i;
            c++;
            }
            if(c>=(n))
                break;

        }
        x=a[c-1];
        y=a[c-3];
        printf("%lld\n",x);
       /* for(i=0;i<n;i++)
            printf("%d  ",a[i]);*/
            for(i=2;i<(8*n-6);i=i+8)
            {
               a[i]=a[i]*5;
               a[i+1]=a[i+1]*5;
               a[i+2]=a[i+2]*7;
               a[i+3]=a[i+3]*7;
               a[i+4]=a[i+4]*11;
               a[i+5]=a[i+5]*11;
               a[i+6]=a[i+6]*13;
               a[i+7]=a[i+7]*13;
            }
            printf("%lld %lld\n",a[n-2],y);
            for(i=0;i<(n-1);i++)
            printf("%lld  ",a[i]);

            if(n%2==1)
            printf("%lld",(x*2));
            else
                printf("%lld",(a[n-2]*2)/y);


    }
}

