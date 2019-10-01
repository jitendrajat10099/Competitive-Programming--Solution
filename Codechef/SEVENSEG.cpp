#include<stdio.h>
int main()
{
    int t,n,a,b;
    int arr[10]={6,2,5,5,4,5,6,3,7,6};
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(n==1)
        {
            scanf("%d %d",&a,&b);
            if(arr[a]>=b)
                printf("%d %d\n",arr[a]-b,(7-b));
            else
                printf("invalid\n");
        }
    }
}

