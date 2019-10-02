#include<stdio.h>
#include<math.h>
int main()
{
long long int n,m,pos1=0,pos2=0,max=-(int)pow(10,9),min=(int)pow(10,9),i;
long long int a[300000];
long long int b[300000];
scanf("%lld %lld",&n,&m);
for(i=0;i<n;i++)
    {scanf("%lld",&a[i]);
    if(a[i]>max)
        {
            max=a[i];
            pos1=i;
        }
    }
for(i=0;i<m;i++)
   {
       scanf("%lld",&b[i]);
       if(b[i]<min)
       {
           min=b[i];
           pos2=i;
       }
   }
   for(i=0;i<m;i++)
   {
       printf("%lld %lld\n",pos1,i);
   }
   for(i=0;i<(n);i++)
   {
       if(i!=pos1)
       printf("%lld %lld\n",i,pos2);
   }

}

