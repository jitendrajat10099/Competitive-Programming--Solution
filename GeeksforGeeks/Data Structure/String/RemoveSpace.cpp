/*
link: https://practice.geeksforgeeks.org/problems/remove-spaces/0/?ref=self
*/
#include<iostream>
using namespace std;
int main()
{  long int t;
   cin>>t;
   char c;
   scanf("%c",&c);          //for remove buffer from code bcz first string automatically taking enter as string
   for(long int i=0;i<t;i++)
   {
        string a;
        getline(cin,a);
        for(long int i=0;i<a.size();i++)
        {
            if(a[i]!=' ') cout<<a[i];
        }
        cout<<endl;
    }
    return 0;
}
