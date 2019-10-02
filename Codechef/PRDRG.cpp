#include<stdio.h>
#include<math.h>
int main()
{
    int t,i,j,n;
    double mid;
    int a[100000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
        scanf("%d",&a[i]);
    for(i=0;i<t;i++)
{
mid=pow(2,(a[i]))-pow(-1,(a[i]));
mid=mid/3;
    printf("%.0f %d ",mid,(int)pow(2,(a[i])));
}

}

