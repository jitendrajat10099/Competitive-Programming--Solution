#include<stdio.h>
int main()
{
    int n,q,k,i,j,c,ma,temp;
    int a[100000];
    char b[100000];
    scanf("%d %d %d",&n,&q,&k);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<(q+1);i++)
        scanf("%c",&b[i]);
    for(i=1;i<=q;i++)
    {
        if(b[i]=='!')
        {
            temp=a[n-1];
            for(j=n-2;j>=0;j--)
                a[j+1]=a[j];
            a[0]=temp;
          /*  for(j=0;j<(n);j++)
                printf("%d ",a[j]);
            printf("\n");*/

        }
        else if(b[i]=='?')
        {    c=0;ma=0;
            for(j=0;j<(n);j++)
            {
                if(a[j]==1)
                    {c++;
                   // printf("%d\n",c);
                   }
                 else
                 {if(c>ma)
                 ma=c;
                 c=0;}
            }
            if(c>ma)
                ma=c;
            if(ma<k)
            printf("%d\n",ma);
            else
                printf("%d\n",k);
        }

    }

}

