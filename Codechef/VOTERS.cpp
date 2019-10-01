#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a,b,c,c1=0,i,j,c2=0;
    scanf("%d %d %d",&a,&b,&c);
    int aa[a];
    int bb[b];
    int cc[c];
    int arr[a+b+c];
    int arrn[a+b+c];
    for(i=0;i<a;i++)
        scanf("%d",&aa[i]);
    for(i=0;i<b;i++)
        scanf("%d",&bb[i]);
    for(i=0;i<c;i++)
        scanf("%d",&cc[i]);
        i=0;j=0;
        while(i<a && j<b)
        {
            if(aa[i]==bb[j])
            {
                arr[c1]=aa[i];
                i++;j++;c1++;
            }
            else if(aa[i]<bb[j])
                   i++;
            else if(aa[i]>bb[j])
                   j++;
        }
        i=0;j=0;
        while(i<a && j<c)
        {
            if(aa[i]==cc[j])
            {
                arr[c1]=aa[i];
                i++;j++;c1++;
            }
            else if(aa[i]<cc[j])
                   i++;
            else if(aa[i]>cc[j])
                   j++;
        }i=0;j=0;
        while(i<c && j<b)
        {
            if(cc[i]==bb[j])
            {
                arr[c1]=cc[i];
                i++;j++;c1++;
            }
            else if(cc[i]<bb[j])
                   i++;
            else if(cc[i]>bb[j])
                   j++;
        }
        sort(arr,arr+c1);
        for(i=0;i<(c1-1);i++)
        {
            if(arr[i]!=arr[i+1])
            {
            arrn[c2++]=arr[i];
            }

        }
        arrn[c2++]=arr[c1-1];
        printf("%d\n",c2);
        for(i=0;i<c2;i++)
            printf("%d\n",arrn[i]);

}

