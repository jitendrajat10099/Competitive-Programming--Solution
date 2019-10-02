
#include<stdio.h>
int main()
{

    int c,c1,i,j,ntr,ndr,nts,nds,t,k;
    int tr[100];
    int ts[100];
    int dr[100];
    int ds[100];
    scanf("%d",&t);
    while(t--)
    {
        c=0;
        c1=0;
        scanf("%d",&ntr);
      for(i=0;i<ntr;i++)
      {
          scanf("%d",&tr[i]);
      }
              scanf("%d",&ndr);
      for(i=0;i<ndr;i++)
      {
          scanf("%d",&dr[i]);
      }
              scanf("%d",&nts);
      for(i=0;i<nts;i++)
      {
          scanf("%d",&ts[i]);
      }
              scanf("%d",&nds);
      for(i=0;i<nds;i++)
      {
          scanf("%d",&ds[i]);
      }
          for(i=0; i<nds; i++)
    {
        for(j=i+1; j<nds; j++)
        {
            /* If any duplicate found */
            if(ds[i] == ds[j])
            {
                /* Delete the current duplicate element */
                for(k=j; k<nds; k++)
                {
                    ds[k] = ds[k + 1];
                }

                /* Decrement size after removing duplicate element */
                nds--;

                /* If shifting of elements occur then don't increment j */
                j--;
            }
        }
    }
              for(i=0; i<nds; i++)
    {
        for(j=i+1; j<nts; j++)
        {
            /* If any duplicate found */
            if(ts[i] == ts[j])
            {
                /* Delete the current duplicate element */
                for(k=j; k<nts; k++)
                {
                    ts[k] = ts[k + 1];
                }

                /* Decrement size after removing duplicate element */
                nts--;

                /* If shifting of elements occur then don't increment j */
                j--;
            }
        }
    }
    for(i=0;i<nds;i++)
    {
       for(j=0;j<ndr;j++)
       {
           if(dr[j]==ds[i])
           {
            c++;
            break;
           }
       }
    }
        for(i=0;i<nts;i++)
    {
       for(j=0;j<ntr;j++)
       {
           if(tr[j]==ts[i])
           {
            c1++;
            break;
           }
       }
    }
    if(c1==nts && c==nds)
        printf("yes\n");
        else
            printf("no\n");

}
}

