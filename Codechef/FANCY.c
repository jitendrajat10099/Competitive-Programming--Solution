#include<stdio.h>
#include<string.h>
int main()
{
    int t,c,i,d,j;
    char s[10000];
    char b[10000];
    char x[10000];
    char y[10000];
    scanf("%d",&t);
    while(t--)
    {   c=0;d=0;memset(b,0,101);memset(x,0,101);memset(y,0,101);
        scanf(" %[^\t\n]s",&s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]!=' ')
        {b[d]=s[i];
        d++;}
        else
        {
            if(strcmp(b,"not")==0)
            {
                c++;
                break;
            }
            else
               {
                   memset(b,0,d);
                   d=0;
               }
        }

    }
    for(i=0;i<d;i++)
        x[i]=b[i];
    if(strcmp(x,"not")==0)
    c++;
    if(c>=1)
        printf("Real Fancy\n");
    else
        printf("regularly fancy\n");
}
}

