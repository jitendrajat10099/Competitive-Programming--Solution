#include<stdio.h>
void kangaroo(int x1,int v1,int x2,int v2)
{
    int l,i,m1,m2,c=1;
    for(i=0;i<10000;i++)
    {
        m1=x1+(v1*c);
        m2=x2+(v2*c);
        if(m1==m2)
        {printf("YES");
         break;}
        c+=1;
    }
    if(m1!=m2)
        printf("NO");
    
    
    }

int main()
{
    int x1,v1,x2,v2,l,k;
    scanf("%d%d%d%d",&x1,&v1,&x2,&v2);
    kangaroo(x1,v1,x2,v2);
    return 0;
}
