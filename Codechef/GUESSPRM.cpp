#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long

vector<ll> squares;
set<ll> s1;

void initialise(){
    for(ll i=2;i<100000;i++)
    squares.push_back(i*i);
}

int findnext(set<ll> &s)
{
    set<ll> modvec;
    for(int i=0;i<squares.size();i++)
    {
       for(auto it=s.begin();it!=s.end();it++)
       {
           int f=*it;
           int z=squares[i]%f;
           modvec.insert(z);
           if(modvec.size()==s.size())
           {
             return i;
           }
       }
       modvec.clear();
    }
}

void primeFactors(ll n, set<ll> &s)
{

    while (n%2 == 0)
    {
        s.insert(2);
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            s.insert(i);
            n = n/i;
        }
    }
    if (n > 2)
        s.insert(n);
}

int findans(int b, int m)
{
    for(auto it=s1.begin();it!=s1.end();it++)
    {
      int f=*it;
      if((squares[b-2]%f)==m)
      {
        return f;
      }
    }
}

int main() {
	// your code goes here
initialise();
    int t=1;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cout<<"1"<<" "<<"100000"<<endl;
        cin>>n;
        primeFactors(10000000000-n,s1);
        int b=findnext(s1);
        cout<<"1"<<" "<<b+2<<endl;
        cin>>m;
        cout<<"2"<<" "<<findans(b+2,m)<<endl;
        string x;
        cin>>x;
        s1.clear();
        fflush(stdin);
        fflush(stdout);
    }
	return 0;
}
