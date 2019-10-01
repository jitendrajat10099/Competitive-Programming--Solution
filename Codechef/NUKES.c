#include<stdio.h>
int main(){
    long long int a,n,k,i;
    scanf("%lld %lld %lld",&a,&n,&k);
    for(i=0;i<k;i++){
       printf("%lld ",(a%(n+1)));
        a=a/(n+1);
    }
    printf("\n");
}
