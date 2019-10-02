#include<stdio.h>
int main()
{
    int t,i,j,c;
    char arr[3][3];
    scanf("%d",&t);
    while(t--)
    {
        c=0;
       for(i=0;i<3;i++)
       {
           for(j=0;j<3;j++)
            {scanf(" %c",&arr[i][j]);}
       }
       for(i=0;i<2;i++)
       {
           for(j=0;j<2;j++)
           {
               if(arr[i][j]=='l')
               {
                   if(arr[i+1][j]=='l' && arr[i+1][j+1]=='l')
                    {c=1;break;}
               }
           }
       }
       if(c==1)
        printf("yes\n");
       else
        printf("no\n");

    }
}

