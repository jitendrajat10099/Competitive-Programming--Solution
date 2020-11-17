/* Problem URL // https://www.codechef.com/APRIL20B/problems/COVIDLQ */

import java.util.*;
import java.lang.*;
import java.io.*;
class COVIDLQ
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc=new Scanner(System.in);
		int T=sc.nextInt();
		while(T-->0)
		{
		    int n=sc.nextInt();
		    int a[]=new int[n];
		    int f=-1;
		    for(int i=0;i<n;i++)
		    {
		        a[i]=sc.nextInt();
		        if(a[i]==1 &&f==-1)
		        f=i;
		    }
		    int start=f;
		    for(int i=f+1;i<n;i++)
		    {
		        if(a[i]==1)
		        {
		            if(start+6<=i)
		            start=i;
		            else
		            {start=-1;
		            break;}
		        }
		    }
		    if(start!=-1)
		    System.out.println("YES");
		    else
		    System.out.println("NO");
		}
		
	}
}
