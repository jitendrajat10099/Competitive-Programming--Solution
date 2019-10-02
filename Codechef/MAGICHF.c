
/*
SEPTEMBER 2018 LONG CHALLENGE
link to the problem  

https://www.codechef.com/SEPT18B/problems/MAGICHF/
*/

#include<stdio.h>
int main()
{
int N,X,S,T,A,B;
scanf("%d",&T);
while(T--)
{
scanf("%d%d%d",&N,&X,&S);
while(S--)
{
  scanf("%d%d",&A,&B);
if(X==A)
{
    X=B;
}
else if(X==B)
{
     X=A;
}

}

printf("%d\n",X);
}
return 0;
}


